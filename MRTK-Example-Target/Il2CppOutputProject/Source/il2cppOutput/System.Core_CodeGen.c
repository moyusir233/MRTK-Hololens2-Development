#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000096 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000097 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000098 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000099 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000009A System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000009B System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009F System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000A0 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x000000A1 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000A2 System.Void System.Linq.Set`1::Resize()
// 0x000000A3 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A4 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A7 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000AA System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000AB System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AC TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AE System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AF System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000BA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[216] = 
{
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[216] = 
{
	7175,
	7175,
	7479,
	7479,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7071,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[71] = 
{
	{ 0x02000004, { 106, 4 } },
	{ 0x02000005, { 110, 9 } },
	{ 0x02000006, { 121, 7 } },
	{ 0x02000007, { 130, 10 } },
	{ 0x02000008, { 142, 11 } },
	{ 0x02000009, { 156, 9 } },
	{ 0x0200000A, { 168, 12 } },
	{ 0x0200000B, { 183, 1 } },
	{ 0x0200000C, { 184, 2 } },
	{ 0x0200000D, { 186, 12 } },
	{ 0x0200000E, { 198, 8 } },
	{ 0x0200000F, { 206, 11 } },
	{ 0x02000010, { 217, 12 } },
	{ 0x02000011, { 229, 12 } },
	{ 0x02000012, { 241, 6 } },
	{ 0x02000013, { 247, 6 } },
	{ 0x02000014, { 253, 2 } },
	{ 0x02000016, { 255, 8 } },
	{ 0x02000018, { 263, 3 } },
	{ 0x02000019, { 268, 5 } },
	{ 0x0200001A, { 273, 7 } },
	{ 0x0200001B, { 280, 3 } },
	{ 0x0200001C, { 283, 7 } },
	{ 0x0200001D, { 290, 4 } },
	{ 0x0200001E, { 294, 23 } },
	{ 0x02000020, { 317, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 5 } },
	{ 0x06000018, { 56, 3 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 1 } },
	{ 0x0600001B, { 62, 2 } },
	{ 0x0600001C, { 64, 2 } },
	{ 0x0600001D, { 66, 2 } },
	{ 0x0600001E, { 68, 4 } },
	{ 0x0600001F, { 72, 4 } },
	{ 0x06000020, { 76, 4 } },
	{ 0x06000021, { 80, 3 } },
	{ 0x06000022, { 83, 3 } },
	{ 0x06000023, { 86, 1 } },
	{ 0x06000024, { 87, 1 } },
	{ 0x06000025, { 88, 3 } },
	{ 0x06000026, { 91, 3 } },
	{ 0x06000027, { 94, 2 } },
	{ 0x06000028, { 96, 2 } },
	{ 0x06000029, { 98, 5 } },
	{ 0x0600002A, { 103, 3 } },
	{ 0x0600003B, { 119, 2 } },
	{ 0x06000040, { 128, 2 } },
	{ 0x06000045, { 140, 2 } },
	{ 0x0600004B, { 153, 3 } },
	{ 0x06000050, { 165, 3 } },
	{ 0x06000055, { 180, 3 } },
	{ 0x060000A7, { 266, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[319] = 
{
	{ (Il2CppRGCTXDataType)2, 7075 },
	{ (Il2CppRGCTXDataType)3, 27206 },
	{ (Il2CppRGCTXDataType)2, 11094 },
	{ (Il2CppRGCTXDataType)2, 10353 },
	{ (Il2CppRGCTXDataType)3, 46749 },
	{ (Il2CppRGCTXDataType)2, 7783 },
	{ (Il2CppRGCTXDataType)2, 10385 },
	{ (Il2CppRGCTXDataType)3, 46798 },
	{ (Il2CppRGCTXDataType)2, 10366 },
	{ (Il2CppRGCTXDataType)3, 46765 },
	{ (Il2CppRGCTXDataType)2, 7076 },
	{ (Il2CppRGCTXDataType)3, 27207 },
	{ (Il2CppRGCTXDataType)2, 11129 },
	{ (Il2CppRGCTXDataType)2, 10401 },
	{ (Il2CppRGCTXDataType)3, 46817 },
	{ (Il2CppRGCTXDataType)2, 7808 },
	{ (Il2CppRGCTXDataType)2, 10433 },
	{ (Il2CppRGCTXDataType)3, 47034 },
	{ (Il2CppRGCTXDataType)2, 10417 },
	{ (Il2CppRGCTXDataType)3, 46916 },
	{ (Il2CppRGCTXDataType)2, 1246 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)2, 4023 },
	{ (Il2CppRGCTXDataType)3, 17082 },
	{ (Il2CppRGCTXDataType)2, 1248 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 4041 },
	{ (Il2CppRGCTXDataType)3, 17089 },
	{ (Il2CppRGCTXDataType)3, 52330 },
	{ (Il2CppRGCTXDataType)2, 1297 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)3, 52341 },
	{ (Il2CppRGCTXDataType)2, 1305 },
	{ (Il2CppRGCTXDataType)3, 476 },
	{ (Il2CppRGCTXDataType)2, 8464 },
	{ (Il2CppRGCTXDataType)3, 37037 },
	{ (Il2CppRGCTXDataType)2, 8465 },
	{ (Il2CppRGCTXDataType)3, 37038 },
	{ (Il2CppRGCTXDataType)3, 22484 },
	{ (Il2CppRGCTXDataType)3, 52264 },
	{ (Il2CppRGCTXDataType)2, 1254 },
	{ (Il2CppRGCTXDataType)3, 268 },
	{ (Il2CppRGCTXDataType)3, 52381 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 499 },
	{ (Il2CppRGCTXDataType)3, 52280 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)3, 398 },
	{ (Il2CppRGCTXDataType)3, 52334 },
	{ (Il2CppRGCTXDataType)3, 15811 },
	{ (Il2CppRGCTXDataType)2, 3821 },
	{ (Il2CppRGCTXDataType)2, 4578 },
	{ (Il2CppRGCTXDataType)2, 4933 },
	{ (Il2CppRGCTXDataType)2, 5186 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)3, 3260 },
	{ (Il2CppRGCTXDataType)3, 3261 },
	{ (Il2CppRGCTXDataType)2, 7784 },
	{ (Il2CppRGCTXDataType)3, 29525 },
	{ (Il2CppRGCTXDataType)3, 52287 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)2, 4579 },
	{ (Il2CppRGCTXDataType)3, 52193 },
	{ (Il2CppRGCTXDataType)2, 1251 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)2, 6100 },
	{ (Il2CppRGCTXDataType)2, 4340 },
	{ (Il2CppRGCTXDataType)2, 4596 },
	{ (Il2CppRGCTXDataType)2, 4935 },
	{ (Il2CppRGCTXDataType)2, 6101 },
	{ (Il2CppRGCTXDataType)2, 4341 },
	{ (Il2CppRGCTXDataType)2, 4597 },
	{ (Il2CppRGCTXDataType)2, 4936 },
	{ (Il2CppRGCTXDataType)2, 6102 },
	{ (Il2CppRGCTXDataType)2, 4342 },
	{ (Il2CppRGCTXDataType)2, 4598 },
	{ (Il2CppRGCTXDataType)2, 4937 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)2, 4938 },
	{ (Il2CppRGCTXDataType)3, 17083 },
	{ (Il2CppRGCTXDataType)2, 6099 },
	{ (Il2CppRGCTXDataType)2, 4595 },
	{ (Il2CppRGCTXDataType)2, 4934 },
	{ (Il2CppRGCTXDataType)2, 2818 },
	{ (Il2CppRGCTXDataType)2, 4573 },
	{ (Il2CppRGCTXDataType)2, 4574 },
	{ (Il2CppRGCTXDataType)2, 4931 },
	{ (Il2CppRGCTXDataType)3, 17081 },
	{ (Il2CppRGCTXDataType)2, 4572 },
	{ (Il2CppRGCTXDataType)2, 4930 },
	{ (Il2CppRGCTXDataType)3, 17080 },
	{ (Il2CppRGCTXDataType)2, 4339 },
	{ (Il2CppRGCTXDataType)2, 4594 },
	{ (Il2CppRGCTXDataType)2, 4338 },
	{ (Il2CppRGCTXDataType)3, 52241 },
	{ (Il2CppRGCTXDataType)3, 15810 },
	{ (Il2CppRGCTXDataType)2, 3820 },
	{ (Il2CppRGCTXDataType)2, 4576 },
	{ (Il2CppRGCTXDataType)2, 4932 },
	{ (Il2CppRGCTXDataType)2, 5185 },
	{ (Il2CppRGCTXDataType)2, 4628 },
	{ (Il2CppRGCTXDataType)2, 4946 },
	{ (Il2CppRGCTXDataType)3, 17365 },
	{ (Il2CppRGCTXDataType)3, 27208 },
	{ (Il2CppRGCTXDataType)3, 27210 },
	{ (Il2CppRGCTXDataType)2, 896 },
	{ (Il2CppRGCTXDataType)3, 27209 },
	{ (Il2CppRGCTXDataType)3, 27218 },
	{ (Il2CppRGCTXDataType)2, 7079 },
	{ (Il2CppRGCTXDataType)2, 10367 },
	{ (Il2CppRGCTXDataType)3, 46766 },
	{ (Il2CppRGCTXDataType)3, 27219 },
	{ (Il2CppRGCTXDataType)2, 4691 },
	{ (Il2CppRGCTXDataType)2, 4994 },
	{ (Il2CppRGCTXDataType)3, 17097 },
	{ (Il2CppRGCTXDataType)3, 52196 },
	{ (Il2CppRGCTXDataType)2, 10418 },
	{ (Il2CppRGCTXDataType)3, 46917 },
	{ (Il2CppRGCTXDataType)3, 27211 },
	{ (Il2CppRGCTXDataType)2, 7078 },
	{ (Il2CppRGCTXDataType)2, 10354 },
	{ (Il2CppRGCTXDataType)3, 46750 },
	{ (Il2CppRGCTXDataType)3, 17096 },
	{ (Il2CppRGCTXDataType)3, 27212 },
	{ (Il2CppRGCTXDataType)3, 52195 },
	{ (Il2CppRGCTXDataType)2, 10402 },
	{ (Il2CppRGCTXDataType)3, 46818 },
	{ (Il2CppRGCTXDataType)3, 27225 },
	{ (Il2CppRGCTXDataType)2, 7080 },
	{ (Il2CppRGCTXDataType)2, 10386 },
	{ (Il2CppRGCTXDataType)3, 46799 },
	{ (Il2CppRGCTXDataType)3, 29584 },
	{ (Il2CppRGCTXDataType)3, 13737 },
	{ (Il2CppRGCTXDataType)3, 17098 },
	{ (Il2CppRGCTXDataType)3, 13736 },
	{ (Il2CppRGCTXDataType)3, 27226 },
	{ (Il2CppRGCTXDataType)3, 52197 },
	{ (Il2CppRGCTXDataType)2, 10434 },
	{ (Il2CppRGCTXDataType)3, 47035 },
	{ (Il2CppRGCTXDataType)3, 27239 },
	{ (Il2CppRGCTXDataType)2, 7082 },
	{ (Il2CppRGCTXDataType)2, 10420 },
	{ (Il2CppRGCTXDataType)3, 46919 },
	{ (Il2CppRGCTXDataType)3, 27240 },
	{ (Il2CppRGCTXDataType)2, 4694 },
	{ (Il2CppRGCTXDataType)2, 4997 },
	{ (Il2CppRGCTXDataType)3, 17102 },
	{ (Il2CppRGCTXDataType)3, 17101 },
	{ (Il2CppRGCTXDataType)2, 10369 },
	{ (Il2CppRGCTXDataType)3, 46768 },
	{ (Il2CppRGCTXDataType)3, 52204 },
	{ (Il2CppRGCTXDataType)2, 10419 },
	{ (Il2CppRGCTXDataType)3, 46918 },
	{ (Il2CppRGCTXDataType)3, 27232 },
	{ (Il2CppRGCTXDataType)2, 7081 },
	{ (Il2CppRGCTXDataType)2, 10404 },
	{ (Il2CppRGCTXDataType)3, 46820 },
	{ (Il2CppRGCTXDataType)3, 17100 },
	{ (Il2CppRGCTXDataType)3, 17099 },
	{ (Il2CppRGCTXDataType)3, 27233 },
	{ (Il2CppRGCTXDataType)2, 10368 },
	{ (Il2CppRGCTXDataType)3, 46767 },
	{ (Il2CppRGCTXDataType)3, 52203 },
	{ (Il2CppRGCTXDataType)2, 10403 },
	{ (Il2CppRGCTXDataType)3, 46819 },
	{ (Il2CppRGCTXDataType)3, 27246 },
	{ (Il2CppRGCTXDataType)2, 7083 },
	{ (Il2CppRGCTXDataType)2, 10436 },
	{ (Il2CppRGCTXDataType)3, 47037 },
	{ (Il2CppRGCTXDataType)3, 29585 },
	{ (Il2CppRGCTXDataType)3, 13739 },
	{ (Il2CppRGCTXDataType)3, 17104 },
	{ (Il2CppRGCTXDataType)3, 17103 },
	{ (Il2CppRGCTXDataType)3, 13738 },
	{ (Il2CppRGCTXDataType)3, 27247 },
	{ (Il2CppRGCTXDataType)2, 10370 },
	{ (Il2CppRGCTXDataType)3, 46769 },
	{ (Il2CppRGCTXDataType)3, 52205 },
	{ (Il2CppRGCTXDataType)2, 10435 },
	{ (Il2CppRGCTXDataType)3, 47036 },
	{ (Il2CppRGCTXDataType)3, 17093 },
	{ (Il2CppRGCTXDataType)3, 17094 },
	{ (Il2CppRGCTXDataType)3, 17108 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)2, 4680 },
	{ (Il2CppRGCTXDataType)2, 4986 },
	{ (Il2CppRGCTXDataType)3, 17095 },
	{ (Il2CppRGCTXDataType)2, 4723 },
	{ (Il2CppRGCTXDataType)2, 5030 },
	{ (Il2CppRGCTXDataType)3, 445 },
	{ (Il2CppRGCTXDataType)2, 1145 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)3, 478 },
	{ (Il2CppRGCTXDataType)2, 4683 },
	{ (Il2CppRGCTXDataType)2, 4988 },
	{ (Il2CppRGCTXDataType)3, 480 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)2, 1306 },
	{ (Il2CppRGCTXDataType)3, 477 },
	{ (Il2CppRGCTXDataType)3, 479 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)2, 9586 },
	{ (Il2CppRGCTXDataType)3, 42840 },
	{ (Il2CppRGCTXDataType)2, 4673 },
	{ (Il2CppRGCTXDataType)2, 4981 },
	{ (Il2CppRGCTXDataType)3, 42841 },
	{ (Il2CppRGCTXDataType)3, 272 },
	{ (Il2CppRGCTXDataType)2, 885 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)3, 271 },
	{ (Il2CppRGCTXDataType)3, 501 },
	{ (Il2CppRGCTXDataType)3, 502 },
	{ (Il2CppRGCTXDataType)2, 9590 },
	{ (Il2CppRGCTXDataType)3, 42845 },
	{ (Il2CppRGCTXDataType)2, 4686 },
	{ (Il2CppRGCTXDataType)2, 4990 },
	{ (Il2CppRGCTXDataType)3, 42846 },
	{ (Il2CppRGCTXDataType)3, 504 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 500 },
	{ (Il2CppRGCTXDataType)3, 503 },
	{ (Il2CppRGCTXDataType)3, 400 },
	{ (Il2CppRGCTXDataType)2, 9588 },
	{ (Il2CppRGCTXDataType)3, 42842 },
	{ (Il2CppRGCTXDataType)2, 4676 },
	{ (Il2CppRGCTXDataType)2, 4983 },
	{ (Il2CppRGCTXDataType)3, 42843 },
	{ (Il2CppRGCTXDataType)3, 42844 },
	{ (Il2CppRGCTXDataType)3, 402 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)2, 1287 },
	{ (Il2CppRGCTXDataType)3, 399 },
	{ (Il2CppRGCTXDataType)3, 401 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)2, 889 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 883 },
	{ (Il2CppRGCTXDataType)3, 258 },
	{ (Il2CppRGCTXDataType)2, 1252 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)2, 11144 },
	{ (Il2CppRGCTXDataType)2, 2819 },
	{ (Il2CppRGCTXDataType)3, 15853 },
	{ (Il2CppRGCTXDataType)2, 3838 },
	{ (Il2CppRGCTXDataType)2, 11594 },
	{ (Il2CppRGCTXDataType)3, 42837 },
	{ (Il2CppRGCTXDataType)3, 42838 },
	{ (Il2CppRGCTXDataType)2, 5203 },
	{ (Il2CppRGCTXDataType)3, 42839 },
	{ (Il2CppRGCTXDataType)2, 795 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)3, 296 },
	{ (Il2CppRGCTXDataType)3, 37012 },
	{ (Il2CppRGCTXDataType)2, 8466 },
	{ (Il2CppRGCTXDataType)3, 37039 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)3, 3262 },
	{ (Il2CppRGCTXDataType)3, 37018 },
	{ (Il2CppRGCTXDataType)3, 13678 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)3, 37013 },
	{ (Il2CppRGCTXDataType)2, 8461 },
	{ (Il2CppRGCTXDataType)3, 3800 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)2, 3014 },
	{ (Il2CppRGCTXDataType)3, 13696 },
	{ (Il2CppRGCTXDataType)3, 37014 },
	{ (Il2CppRGCTXDataType)3, 13673 },
	{ (Il2CppRGCTXDataType)3, 13674 },
	{ (Il2CppRGCTXDataType)3, 13672 },
	{ (Il2CppRGCTXDataType)3, 13675 },
	{ (Il2CppRGCTXDataType)2, 3010 },
	{ (Il2CppRGCTXDataType)2, 11204 },
	{ (Il2CppRGCTXDataType)3, 17091 },
	{ (Il2CppRGCTXDataType)3, 13677 },
	{ (Il2CppRGCTXDataType)2, 4500 },
	{ (Il2CppRGCTXDataType)3, 13676 },
	{ (Il2CppRGCTXDataType)2, 4347 },
	{ (Il2CppRGCTXDataType)2, 11138 },
	{ (Il2CppRGCTXDataType)2, 4631 },
	{ (Il2CppRGCTXDataType)2, 4948 },
	{ (Il2CppRGCTXDataType)3, 15832 },
	{ (Il2CppRGCTXDataType)2, 3831 },
	{ (Il2CppRGCTXDataType)3, 18079 },
	{ (Il2CppRGCTXDataType)3, 18080 },
	{ (Il2CppRGCTXDataType)3, 18085 },
	{ (Il2CppRGCTXDataType)2, 5197 },
	{ (Il2CppRGCTXDataType)3, 18082 },
	{ (Il2CppRGCTXDataType)3, 53422 },
	{ (Il2CppRGCTXDataType)2, 3018 },
	{ (Il2CppRGCTXDataType)3, 13726 },
	{ (Il2CppRGCTXDataType)1, 4491 },
	{ (Il2CppRGCTXDataType)2, 11150 },
	{ (Il2CppRGCTXDataType)3, 18081 },
	{ (Il2CppRGCTXDataType)1, 11150 },
	{ (Il2CppRGCTXDataType)1, 5197 },
	{ (Il2CppRGCTXDataType)2, 11592 },
	{ (Il2CppRGCTXDataType)2, 11150 },
	{ (Il2CppRGCTXDataType)2, 4637 },
	{ (Il2CppRGCTXDataType)2, 4952 },
	{ (Il2CppRGCTXDataType)3, 18086 },
	{ (Il2CppRGCTXDataType)3, 18084 },
	{ (Il2CppRGCTXDataType)3, 18083 },
	{ (Il2CppRGCTXDataType)2, 676 },
	{ (Il2CppRGCTXDataType)3, 13740 },
	{ (Il2CppRGCTXDataType)2, 907 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	216,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	71,
	s_rgctxIndices,
	319,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
