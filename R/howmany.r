setMethod("howmany", signature(x="memuse"),
  function(x, nrow, ncol, unit=.UNIT, unit.prefix=.PREFIX, unit.names=.NAMES, ..., type="double", intsize=4)
  {
    type <- match.arg(type, c("double", "integer"))
    
    x <- mu(size=1, unit="b", unit.prefix=unit.prefix, unit.names=unit.names)
    
    if (type == "double")
      bytes <- 8
    else if (type == "integer")
      bytes <- intsize
    
    size <- convert.to.bytes(x)@size
    
    if (!missing(nrow)){
      if (!missing(ncol))
        stop("you should supply at most one of 'nrow' and 'ncol'")
      else
        ncol <- size/(nrow*bytes)
    }
    else if (!missing(ncol))
      nrow <- size/(ncol*bytes)
    else
      nrow <- ncol <- floor(sqrt(x@size/bytes))
    
    return( c(nrow, ncol) )
  }
)
