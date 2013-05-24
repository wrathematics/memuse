### Method declarations
#setGeneric(name="print", 
#  useAsDefault=base::print, 
#  package="MemUse"
#)

setGeneric(name="swap.unit", 
  function(x, unit)
    standardGeneric("swap.unit"), 
  package="MemUse"
)

setGeneric(name="swap.prefix", 
  function(x) 
    standardGeneric("swap.prefix"),
  package="MemUse"
)

setGeneric(name="swap.names", 
  function(x)
    standardGeneric("swap.names"), 
  package="MemUse"
)

setGeneric(name="howmany", 
  function(x, ...)
    standardGeneric("howmany"), 
  package="MemUse"
)
