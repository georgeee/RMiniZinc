% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Model.R
\name{Model}
\alias{Model}
\title{MiniZinc Model class}
\description{
This class will take all the objects required to create a MiniZinc model.
}
\section{Public fields}{
\if{html}{\out{<div class="r6-fields">}}
\describe{
\item{\code{parameters}}{vector of variable declarations of the model}
}
\if{html}{\out{</div>}}
}
\section{Active bindings}{
\if{html}{\out{<div class="r6-active-bindings">}}
\describe{
\item{\code{parameters}}{vector of variable declarations of the model}
}
\if{html}{\out{</div>}}
}
\section{Methods}{
\subsection{Public methods}{
\itemize{
\item \href{#method-new}{\code{Model$new()}}
\item \href{#method-item_i}{\code{Model$item_i()}}
\item \href{#method-mzn_string}{\code{Model$mzn_string()}}
\item \href{#method-clone}{\code{Model$clone()}}
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-new"></a>}}
\if{latex}{\out{\hypertarget{method-new}{}}}
\subsection{Method \code{new()}}{
create a new instance of model class
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{Model$new(items)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{items}}{all items of the model}
}
\if{html}{\out{</div>}}
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-item_i"></a>}}
\if{latex}{\out{\hypertarget{method-item_i}{}}}
\subsection{Method \code{item_i()}}{
get the item using index
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{Model$item_i(i)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{i}}{index}
}
\if{html}{\out{</div>}}
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-mzn_string"></a>}}
\if{latex}{\out{\hypertarget{method-mzn_string}{}}}
\subsection{Method \code{mzn_string()}}{
get the string representation of the model
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{Model$mzn_string()}\if{html}{\out{</div>}}
}

}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-clone"></a>}}
\if{latex}{\out{\hypertarget{method-clone}{}}}
\subsection{Method \code{clone()}}{
The objects of this class are cloneable with this method.
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{Model$clone(deep = FALSE)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{deep}}{Whether to make a deep clone.}
}
\if{html}{\out{</div>}}
}
}
}