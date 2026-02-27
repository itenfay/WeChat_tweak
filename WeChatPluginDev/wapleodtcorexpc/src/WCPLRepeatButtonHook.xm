
#import <dispatch/dispatch.h>

static NSString *const kWCPLRepeatButtonFlameIconBase64 =
    @"iVBORw0KGgoAAAANSUhEUgAAAgAAAAIACAQAAABecRxxAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6"
    @"JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAHdElNRQfqAhsM"
    @"MwflxhhNAABLbUlEQVR42u2953rjSM92u6icg+2epyd+539Y+52e1E5KVpa4fxSqWKQo2W4HkRSWr5l2"
    @"kkxRLBBAATdAURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRF"
    @"URRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRF"
    @"URRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFUTJNcO4DUHzC5Dde8v6Er/t1RYko"
    @"nfsAlBPoelY+GDUAinLB6D0mIzzj/IdHf3L0SfStVZ5Hr5KMEAvkwx9+XzQfoLwKDQGyR0iKQ6AoH4He"
    @"JnLKSW9f/QDlhVTOfQDKIaFZt2YZRys48H9BvnPKUwhQT0J5BjUAmcItfZMFMP8FBJSIDEAovxG6rw6e"
    @"5MhPFCWBGoCz49apf8e2y79EiTJlSmIIzANC9uzYsffyBWmeAoQv2z5QLhU1ANkloESZKjVqVKlQct7B"
    @"ji0bNqzZshNvID0cCNQPUE6hBiCrBASUqdGkTZsmdfED9uzZsmLJEwtWrNmxZ+9MQEhatkBRUlEDcHas"
    @"Xx8jFAPQoMsVQ/q0qFEmYM+WNXOmjJkwY8GGDVv2Xl4g+eTuSdFiISWGGoCsYu7/LQZ85Weu6dOgSsCO"
    @"LUumjLjjgTFTlixYsWHLNsUEKMoJ1ACcndQVa+L/Gm2G/MRvfOWKFlVK7NiwYMojPXo8MmLGjCkLloSS"
    @"ETC5ggAgUIOgnEANQDZIJusCSlRp0KHPDV/5lWvaVCmzY8OSGQO6DHjkkTEPPDAmYA9JHyBM9/K1VEgB"
    @"1ABkg9jGnWz4VajRpEOfK6655kYMgMkBLOjT45oxjzxwS4s6ZQIWrNjBiSqB5F9WD+GiUQOQRQJKVKjT"
    @"pkufHl06tGlRoUzIjjp1GjTpccUVQzrUqFICypRYs5cagUSVQHC8aEi5UNQAZA+T/6/SpE2fPj06tGhQ"
    @"o0IJ2FOlSp0GHZb06NKkSpUSAVUqsi+wkc3BiDDUngElgRqALGI8gBpNWrRp0aBKhTIlKQk2BUJVGrRp"
    @"0qROhSoVqrRoy77Ako0rEwJcajD976kncKGoAcgmtgOgJAXAofuwi7hEhTJVSpQpgRiFDg+MmTFhxpKV"
    @"8wNCFxL4QYE1CeFhPbFyGagByCKm1n/LhjVr1mzZS4bfEnUGlKRCsEKdJkMeeWTEA4/MmLNiJx9br3sg"
    @"3jmgd/8LRg1AFgml3HfOjBkLVmylxNcuXHv/hooYAxMQmH2BR265ZcyMpesaWLH0egfSUFNwgagByB4h"
    @"uN3+KVNmLNmwY09Zfh5fqiUqNKRuoMeQIY906TJmyoINa5YsmDJlzkKKhfCKhTQQuGDUAGQNsxzNbv+S"
    @"J+Zy597H7tyRCTA1A6ZuoE6HHj369Bgw5YkFG5Y8MeWee0byGL/pOPl8ykWhBiALxDv4zHf24riv3PK3"
    @"BF4AYCgRUKZClS0NmrTpMGAhPQKmcLhLnSoBAQtImBMfNQUXhRqAs3OkG9C0/W5lMy99wcbVPkqyQVih"
    @"Sp2OSyAumfBIgzIltyNgPYrg4DA0ELgo1ABkhdBL8JmIfO8+wiP367hyoFEQKlOmSp02O7Zs2bNiSo8a"
    @"ZckhBMCSjd7pFTUA+eC09Kd/wzYzBcpU2BOK57CmSZMyJcqEIFUDy1htwLFnVQqOGoCzc3SlBd7HKY88"
    @"UgKKns7Ih5UJCalQls+QHQBTU7Bjwy7ePKyBwKWhBiAvPCcAbn8nMhb2Lr6nJM6/KSQuE20CblyFQfrz"
    @"qh9QcNQAZJd46e9L8O/l9mtTJxAQErpOglC8ihKLk4GALv/Cowbg7KTuApgfPOf8H5I0GLZoqESNNoEs"
    @"dpMbsIHA9mgggAYCRUcNQJaxHsDrfAD/8caA2KkCZWdUSl4gsDwZCGgYUGjUAGSXty88eye3i7/kzRwK"
    @"XCBQZi6BwD7FBOjyLzRqALJLFAJEewGvJ2oBNjIjLTgIBPYSCNhHaCBwMagByDJREjBeChS+Yi0GsvjN"
    @"/b52NBAwJcd6x78w1ABkl6gecOcqAn8Ef1egRJUSe/bOJOzFGMzkr6kBuCjUAGQP/06/FzGPqB8gcJn9"
    @"1+4ORIGA3REwuwDEAoG4hJi6/QVHDUB2Mct/w9LN/qmK/NfribcP15zzbycQmyKhkCXrlLkCoZqBoqIG"
    @"IKuEUqy7YCZTAJtUqSSq/F6O3zgUUAHaEmTYQMCWCiECZBBtJGpgUFDUAGQXIwv2xIgHBvRpU6Mqu/pv"
    @"wSzqigQCxgjYYSLGDGwPupM9RWH1BoqEGoDssmfLkhkj7ugzpEeLHZU33I39QKAUCwRCMSs2ELAmweBv"
    @"DKovUCjUAGSTQHr31syZMGLElAVr6eZ7y/P6gmAmHWj6AwNMl6BJBO5S9gM0ECggagCyS6QMuJBBH7t3"
    @"3KYzHQIBNTouENiyY8WKLevY3wqSD9RAoCioAbg8Ai8ZCDU3bwg2bFgyFyOASwWmP14pAGoAsosdENag"
    @"SZOGbAK+x603EgK3msJ79mxYMGfMg0iRR8s/XhOgy79AqAHIJqEo/dZo0WPAgC5NapTf2feOSoNabJgz"
    @"YUifR+pU2SXv9eFB57IGAnlHDUB2MQM/Ogy54ZoBHTEA77Pq4oFAlZAtXQZcccWIKSspQtaBooVGDUB2"
    @"KVGhTps+V1zRp0VdBoS/phnoOEGs6LdElaaYgBFTluxljJhtIdZAoICoATg7R1ZSIO27Tbr06dGhQZVS"
    @"QgL0bfgmwBqAa8Y8sWAtHQJboj4C80miGkDDgDyjBiB7RM55SQZ+NWlSd0nA97z3Bq7YtyyzBZfM2bBl"
    @"L3sDy5MGRwOBnKMG4Owc1QQ0XoAZ9VGRxW81At/zthuZmxotBqycPMjeSYnvNRAoJmoAsotVAypRpkTp"
    @"nbYAj1OiQtMl/mxfgGkbTs4RCjyhIHewSv5QA5AVohUUZedL3oef/X/P1RZpCwQuxRj1Bdg5QguQlKCu"
    @"9EKhBuDshBDF4pbAGYBIAeCj3O1INKxEQF3u/UYixIiGmG6B44GAklvUAGSB4OArM9+vRp0aNSoJD+D9"
    @"/37kdQTU3RKPFALMRIFNclRJGKhYSL5RA5BFzPKv06JDl5aUAX+sCbD/BiI6Eu0OmO+HBCxYye+F3iM1"
    @"EZhj1ABkEVuc22VA3xUB/5gY2OuISoObRM6/df+RwCBMPiQ6cCVfqAHIGiElqQHsMOSaG4Z0qDsxsI/H"
    @"eAEN6TtIThVceDsCgfdvqL5AHlEDkEUCrwvAGICG5AE+MgsfFSRY+fCo6LjstAPN7/g9AnrbzzFqAM7K"
    @"kVtmyQsBBnRpfUAf4HOHZQuRrWj4lh1bVmzYshG/IL74QxULyR9qALKE3ZALXCNQlw5t6lQov2sXwEuO"
    @"JaAKLhAwUwOWrNiwEaOgKz33qAHIIqb6r0qNOnVqsvyj/fqP/dvR4JESVcogSsErFkyYsWD5Zm1CJSOo"
    @"ATgrR2R2fe3eslcH6A/t/NiDio6iRI0mO5ZMGXPLPWOXkPQyEuoM5BM1AFkkqgIsH5QBfy6mKLjOnh5D"
    @"Rlxxx5gZGzerUIyAqQcK1C/IGWoAskS8C8D2/31UF8ApAm9bryR1AV0GDLliwpytG1eqSz7XqAE4Kwlx"
    @"DTuxtywfH98BeBy/OcmWBvW45pEZC5Eo37BLSIbrBKGcoQYgW5iovyIiIO+pBPzWYzKFSU/M2bCRJqEF"
    @"GzYk0xiBFgXlBzUA2cJk3hu06dKl45SAz2MCoiYhoxfUZ8mKHRv2MkHQzBAKZLJQhC7/nKAGIDtY999I"
    @"gQ9lGuBndQEcPyowJqDOniu27FizZcOSjdQEhKceqGQZNQDZIuoC+MIXrujRTBTlnoMAKFNz9X87tqxZ"
    @"sGLNRgqDlVyiBiBLBHKnNVLg1wylCvB824C+UkCZEiF79qxY8MSICU8s2bkZQqoXlDvUAJyJo2LgkRR4"
    @"3+UASmeMqX2NYqQoaMiMEQMpCiodPkTJC2oAzkfAoaxGSZSAmrRo0ZRRIJ/bBXDsOE2bcJ29VAQMGTBh"
    @"LnOEvaPToqD8oAbgfBxbIKYCsErN2wS0nfnnxg4Q6cgQsSlztuxiRUEaCOQINQCfzotWsS8F/vl1gEn8"
    @"v2vqAtv0uWHCXHIAe7Zs04qC1BZkGzUA58df4FnpATh+rHZk6RVzUQcw4ckiIRgaZsZrUU6gBuDTSWho"
    @"+GJa0SwAv/vv8GHnOWx/YFmDviz/LTt2bNmLJ6DkCjUAWcBGzVYHoCqjwLKGTVRWaBBK7G+MgJEJ2R4W"
    @"BWk5ULZRA3AmEsFxIAo8DVq0adPyhoFmi2RR0JYtS2YsWLBWDyBvqAH4dFKC4sBtsbXonUkH8HniRUFG"
    @"JGzHnCkPdN3w8oMHKVlGDcAn4pb+4d0/KgG+4Se+cPVJSsCvI56rqNFkS8+bXJCV41ReTPbizOJzfPlf"
    @"8T9+5Td+4Sf6rgsgmwQyuqwlJUu1jIYsykmye4EVkOBwX8+qAFdp0ueGr/zKr3zlmu6ZuwCOvYS4gEmZ"
    @"ClX5KKf5AKGKBmUaNQDnJ5DSmqF3/x/Qpu52ArK0guKFSSUqVKnTcOrFyeqFgEDNQHZRA3BurARIj2u+"
    @"8gu/8D+u6LoMQLY8gOSRl93ORYc2Dc0E5A01AJ9C6H24bxms2k6HAdd84Zo+beqxnHpWzUA0wMSkAq18"
    @"ia8nCBAEmX0Jl47uAnwu8bLfMLaEhlwxpE9bttSyjzFeLfpcM2LMlCUrtioQkh/UAHwWye280Nv9b9Nj"
    @"wFD2/xteC7B5ZFax8iUDbpgyYcwTC9YyOEzJAXm4z+Qa5/an5cCi+3/faQDWE1F0dpd/FL50GTjvxSoY"
    @"xM9CEKo8QCZRA3BO7P1/wBd+4oYBnfQFlEHs9MCofnHoNIyynr5UHGoAzofZRW/Q5UoMQD9RAJzVJRTN"
    @"KIxkzE0J84AuTaoJL0Y7gjKLGoAPJvA+BL+QJh4AtN0UgKz7y1G7slUx7NA/HQZoNUAW0STgpxAe3v/i"
    @"984hA3qeBGj2TUDydRg/ZspU9gI2uheQB9QD+ByS9f924KbV1htIArB6xjlAP/7aKm4v4EZmGeQjj6Go"
    @"B/BxeLfwwH3LOM1WVafNgCuuuaJPSxzn5GOyTFwjqH3QGZjwYvLwki4N9QA+kqSwV7T87azd/3nFv1ls"
    @"/nnZqyxRoUaLDh3asg+QP0/mIlEP4CMxW2X+18YE2N5/v/knH/n/QwLRCLJNQQ3qVKlQ0ptLHlAD8AGc"
    @"zN9Zh7nrmn//xxUdKQAKnnt4hogfaynWGlxJ280IvUfkx8IVG7XSH0Vw5LslKZ/1xT+GOSoASn+VtjOw"
    @"LjONGinlQHkxbBeFGoCPIjzyVRQAfOEr/+Mmx8s/InBlTW26dKWhKYvKxkoMfYPelVipS3oPbNT9d8WV"
    @"5P9rseWfz+RZVA8wYODVNKbIhObzBRYTzQF8DoFExBXZ/e9zxZVU/5nd/7w7yIFMDBryhSkTKQfaHZQD"
    @"5afE6SJQD+CjiSvo1UT6wxT/dGXLLPB+N683RytsNuCaGydrovpAGUcNwLuSUvlvCLHOf5chN3zhmgEd"
    @"GrElkk/fOBTDFSkbDV1l42FmI9TW4CyhBuADCAmDMO7qmtLfFn1u+NlT/j0yTiOHRK3BXWkN9k1AEV5h"
    @"IdEcwEeQvNxLUvvXkb3/qPinmsvin+RrDWWJx03AI2MWbNMmBipZQQ3AOxGb+hMm3Pqo7/9//Mrv/Obu"
    @"/5WcFf+kE00MMq3BJsyZMOGJFWt2h69QJQKygRqAj8WUyVZp0OeG//E7/4/f+JWf6NOR5t/iYLYCTZfD"
    @"hCljpixYsGGXcxNXWIp0+Z2Vo7vbUXb8J7n7/8wX+rQPdv/zjkl0mlyH0TiOahxefr6UT0U9gPclTfbD"
    @"Vv7/zK/8xs/8xNAt/2OPyx9+EBDVAzYlyZn/11dQ1AB8LNH9/wu/8Bu/8D+R/ixTpnihsJU6MdOCWjIw"
    @"rBj7HIVEDcA7cSTEDZxLfM0NN1zTc0WyoTywCIsjSn0GlGRiYI0aNSpuI9A/RUEY2ocp50RzAG8mJDSN"
    @"rodDMSOHuC9zf+zeeJGvfNsZWKNO3akDxKVRQg0LsoEagPcldpdztXFG9TeqjisXKvkXvV77r/EAGrQ8"
    @"hSAVCMkk+qa8CVfhkj73x+6Km+LYjrTI5r3093lsZ2CHHj06KZMClIygOYD3IvD+bz6z+X9T+2/Ucqux"
    @"qX9FpeR0gs3Q0JkrB9KZgRlDDcBbObacbf7fFAB94cqbmZOsFiwSduJxky5XjJkwYswTFZ0UkEU0BPhB"
    @"EkM//YZe5DtG+b/LkCuu6HmV/0X3AAJRCe4dHXmqZAQ1AO/BofB3lP+Pxmb6nX9FNQHJSQFWHqxSsKLn"
    @"wqAhwI8THEn9meVvu+KM7Jc/Nbf4RBKhVia87G0DFj8HkiPUALya0P8krnkbSD18yUljXIvyT1Ihr5hm"
    @"IFkOVKZCmTIlLQfOKmoAfoS0e5i9u5l7n5H++MrPfM3R2O/3PUfGCJTSJZKUbKAG4D2xzn+TPl/4ym/8"
    @"xs/c0KMh7n9Rc//+OQjdZ/acFP015xg1AK/gqPMfqeJYaezrE8o/l0LofRQ37Zlz1AC8jlPOf0CFKk3R"
    @"/fud3/mDX7imT+sC8v/PcWnmLyeoAXgdx5Zv5Pz3+MJXUf75hS/0aIvyT1C45t/TqPOfA9QAvIjYuk/O"
    @"+/Uz/z1x/n8X3d8ezVj673KWP+r45wE1AC/l2K5/5Py3GHDNz/zB7/zOL9wwpC3NsPHEmKJkBDUAL+Ul"
    @"zv+NOP+/ivPfpBYr/bm85X95rzhnqAF4hpPOP4QJ5/83fudX2fqLlr86wkpGUQPwPMedf9P4WqMZc/5/"
    @"5ZqBc/7jv68omUINwPOER75bOuL83zjdP5v518WvZBQ1AEd5xvmPJL/Snf/LaPxVco4agFOkL+Eo8+87"
    @"/3/wW8z5L+viF9T/yTBqAE5x2vmv0aYrzv8f/JZw/i16+ashzDBqAFJ4ofPflJr/32Tg1w19Ggnn/5KX"
    @"/wteuyZIzo0agHRe5vzf8DXh/Ncoq/Of4FRBsIqDnBk1AOmEB19HHX++8/8bf7iW36Y6/zFC92/47O8o"
    @"Z0INQIyjzn/0vbjz/4eb9tt0wpfq/Ef4RiBlsetJOjdqAA4Jjjr/Ru++oc7/iwliH0rmUAMQIwB313L/"
    @"+HIfNZpu39/c/S+74+8UkTZgyekCQszN0iTguVEDILzY+e9xLXIfxvkfOOdfE1pJSm5MaJWqm4jonyct"
    @"ljozagB8Xuv839B3zj/a8psgcJ0SLdo0qLFlq8PBsoUaAOFZ57/6jPOvqb84Rh/ZzEbq06PDnA0b9I6f"
    @"KdQAvNT5b8Wc/1+4Uef/GQIq1GU6wpgxT6xYsz+5Lah8MmoADHYJh4lU3qHz///4NcX5166/OEYmzUxH"
    @"vuKGCY+MmbPQ3YBsceEGIIx/Eo34POb8m46/a3qu6PfQcChgKybrtOlxxaPXJaFZgAxx4QYgRpDynaTz"
    @"/7s4/8mWH+UQ2y7dcSNCL3E6QsZRA/Bc5r8pQ74i57+nmf9nsP6UEUut06QpI0IjhUTNm2SCizUAL3b+"
    @"u57Qt838Vz3nXxd/En9EaECZihsRqmcqc1ysAYiRrOEz965KrOzHd/4r6vy/CFsC7A8JVTLFJRuAY06o"
    @"TV+p8/8eBOIL6JnKJBdoAF404rNCky5X6vx/LgcW+fkz/GwZh3KKCzQAvHTE5xW/8Ae/qfP/JkLv/6/l"
    @"JetZk4lv4jINwDGSU37izn+dkuf8683meYwKwF6q/7QGMINclAF4kfPvZ/5/izn/JXX+X4RfGhWyZycf"
    @"+1PL/xm1kOOD2ezvhdGv6Zvzci7KAPAS579F/9kpP8pLMIt/w5olS9ZsY0bg1JI+LKt++ZrWkOBVXJoB"
    @"eO2Iz8j51yk/LyeQ0eA7Nqx4YsqUJ1ZsT3sB74Iu/1dxIQbgpNC3aVzxR3z+GpvyU9URnz9ASMiONU9M"
    @"GDFiyoI1u2NnMYgeF//36NMnHuyFdGHiR8pxLsQAcGrEZ+T8Pz/iU3k5IVuWzHjgjjsemb3UBwh9paDX"
    @"r2ANAl7B5RiAH3H+W+r8/yABsGfLkimP3HHPiBmr4x5A6D8yLhlW8oqJ7C+H3v+VN1B4A/DMlJ8w4fwn"
    @"R3yq8/+jhIRsWbNgyphxLARIuUcn9EKtwQ2cpKgtJA6BvWwu7tmT5inovsCLKbwB4JTzj1OtO+b8q9D3"
    @"j7Nnz5YVC56Ys2QtuwCpqzEkxdSWKFOhRpUKFTEBJrewY8OGDTt2z1QXqAE/ySUYgNMjPo85/36/v95A"
    @"foyQHVs2rFnLYt2n/E46Voa9QYsWDWpiAkL24lksmLNizS71WV6YTLx0CmwAXjji85jzX9Z7xxuxdYA7"
    @"drEaAM8jC8ITp9i0ZHUZMKTr+jD27CSwGFFhKh5BVMwVPdoeBRoIHKfABoCXjvg0zr8/5Ued/7cTep/Z"
    @"j9dg1Zj6fOUrV/SoUyGQ1OKMB26pU6FEcGp70T2bvpupFNsAnHb+oxGfv/OHKP32DsS+9LbxYwTO0JZE"
    @"DiRlMtDJxxtR0R43/MpXrqQiY8+GJWPunE9QYsFaUoJ2XyC5a6PL/wiFNAAvdP6jEZ+/y4TfvpP6VK/x"
    @"PQhkMlBVfCqzoerdjcPAhAGpjcD2XerzhZ/5QpsaJfEAxnRchUaZMgu2bNgSevsC9nnc0+tbekghDQAv"
    @"df51xOdHYkeDGE3ABnM2r9AEjgaLdOhzzQ1dapTZs2NFl5YzLA2aTFmyYsmW7Yl9AQ0EDiiqAQgPvo46"
    @"/nzn3075iVJ/6vy/D/ZMN50q8Fzu0cd+P/noEhWq1GjQpElbzHPIjjpVKvIbFVp0GfHEjBkL2RcIU9KC"
    @"GgikUDAD8OIRn93YkK8v9N2UH/UU34uSzAUYcMXImwyUKAZ2FQC+XnDgagDq1KlTk48yIXsRGYUSVer0"
    @"eOCBMY88MGEqugPxxa6BwBEKZgCA14/4VOf//fEnAw35woQRExYs2b7g0SVXoNWmTYuG3PONf1ZyGsMV"
    @"GrQZMuaBB25pcUuZgAVrthwb16KBgEfBDMCzIz5rz4z49J5GeRMBeB7AI33ajF84GcjuAHTo0qNDQ9J9"
    @"0cI1wi2B1HHMuOKejhQL2T6BfTIQkLdVl79HYQzAi51/f8Tnz3zREZ8fRpTE69F78WSg0Bsq1ueaKzeF"
    @"MfDaf0x+oUSNOh0WdOnSpEIFnAHYJgOB8GAbUi19YQwA8HrnPzniM3qE8nbsJmCdhjjxcS/reDqwTE0G"
    @"sv3ET1zJ4i7FBMbtNmGVJm2atKhLx4DtH1yClw60qJGPURgD8KzzX33G+dfc0PtiDW+yDuC5M2wf06TH"
    @"0HkA9ZgqQzR6zM4eKlGhJPf+vfgKgXQNxgOBIFAT4FEAA/BC578Vc/6N0Lc6/x+LnQpUpiznOXjm96P4"
    @"v0WXAQP6dF3wkOz/DzBlQBVpGbb7CSZfYAzARrWIT1EAAwC8xvm3Qt9x518lPz6O13QC2OXfps+QIQO6"
    @"4tyXDt5j36AYQxM6n8AEAiGwZCVHIUcTBrh0gFIAA/Aq5z+a8tNwiaXoEcr74ouC7w4rAA5+275fDTr0"
    @"Gcjyj8axGJMeSYr4z1aiSkueB/bsQNQHQtaHfzkuOnS55NwAnHT/o2ry9BGfftWf8t7YeHzn9AC2LxgN"
    @"YvL/HQbc8IVr+rRcmGZ+jvdZfGMwoC7hnM0BmGqEENgcpHh9Q3LB5NwAHCGq+dcRn+fDyIEYRaAnKc45"
    @"PRfAz9b8xE+JeYzp+R3zXNZA2EDAfG48CrvQjXBImDABF07ODYCvEyn/pDv/OuLzswmBHWvmogk4Y8Hm"
    @"mb59swHYoMOQK65cc3bw7F+KqgNMIGC6AvdsRTxsxyY1AAkvffsn5wYADtTkZLMn5vzriM9zYKU7rCqw"
    @"GQ1yGAREO/tGoalNjwFD+nTdNu0p/V/flBuvz1YMGAOwYskm0YVwqev9gAIYgARBzPn/os7/WTCy4BuW"
    @"TGNzAXZHC4EDae1pS/qv7yUAn68dCGPPYncMdqxZM2PGkuUJ7+OCg4HcGoAT75g6/1nATgaap0wGCmJ+"
    @"t/lOVP/f54qhuP+VF3ZoWB/QPK/x/nYyluyOe8ZUWXnvfOj8DnnUpQYCuTUA4BJD/ntnu8jtlJ9k5l+d"
    @"/8/DyHcu3WzApeQA0leZzf8P+eLy/z+2UxMQUGVPyJohY67oy1iSvfz9uHjoxd79Id8G4BBT/lGNCX3/"
    @"xi98cSM+I+f/8oz952J34zes3HTg49uAUc7mysv/+wnA59+vwC1u04lYo0WHAVdcMeGJtYwT0cpAjxwa"
    @"gDD5SdKRtDpyv/Abv/LVOf8ldf4/kcjF3rtCoPSlZxatMQAdBgxdAPB87+Dh34woifTLkGumPLEWg2RU"
    @"A13t52VfCjk0ABx323wl2Z/5Ve7+OuLzM4lab8LYCK9o+cffvYBQ2n9en/8/hZEUadPnhpkbILJnISbA"
    @"O2CcNOnlkU8DkI5VoWvR44b/8TNfpeZfR3x+NqEs/V1Crvvw92z6r36w/Csv6B08JEowmqLiPitWMpjE"
    @"+BoLQklGajCYLwNwMDrSfhUFAeZN7zLgmmuZKFOTe/+F2vhPJMqtW+d/H5sIlE60azN0+f96bPm/dolG"
    @"JqBGi4E4/zuQhb+Xz4LYQ5xnckkWIVcG4Ai28NfKfXfpy6UUdZLp4v9MzBbghhULlqzYeGbgkMBJh33h"
    @"J24Y0Kb+5k4N0ypck76AkusLMN0CCzZsSPYEJaYWXAJFMABg3f86LXqS9+3TOcgja8/fRxLtsYdsWTFn"
    @"yoSJ2wC0JiC5wEoi1D7gmhvR/6lSdj9/7XvmBwG2jiDqCAAkH2GCgn3i+S9q+efMAKQoO0UbP1HO94Yb"
    @"rmQbqXT0CZT3JVrce/ZSAPTIPQ+MmbNK1OEl8/XGB+iK2X6JduAp/N2eCkhfwJ6QLVu2rNiwPS4Vckmp"
    @"gVwZAMOBlkOU/BtI9t/m/rXw57OIVBX2bNnwxIhb/uFv/uWeCctYJ6DBJmWj+UEdOp546I/m/6Pntt0B"
    @"DTEogWwELliyZiMtQxdNDg1Agmj5mxlyv3mTfqpeHfllGPTzYRfsng1zWf7f+MY/3DGVNqD4FmDkqNsR"
    @"IA3q1GT5B96z/vjxmM/K0g68Z82CJ8ZMmbNgqwYgJwYgGijvfSvShjXL/4avsvf/E0MZJfmaebTK2wik"
    @"6GfFE4/8x998429uGfGUMsDb78u3Q8CqVKh4c4TNT99yPMnugCUzRgy4p0GVtXv2+OSACyInBkAIEp/b"
    @"kk8z6PMX/pDKf1NJXnljJKm8HpP+m3DPP3zjr5QAIFr2pnC7ItP/WrRoUHv3d80UGpmdhpAlA64Y0mfM"
    @"nG1SpsyEl5dUFJQvA+ATypgoU/l3zc/emG9TSFryin/VEHwGJrduPIA7vnPLo3QBhgf6/LZw287/7dNJ"
    @"yH+9nSC2zWeLjftcccXUGYCL7g7IiQE44sn7lf8/S+X/DX0R/Ew+XPl4QkmyzRgzYsJMtgDjGzg2vi97"
    @"1frXDOkk9P/fTtxntKnia8aSA9ix845Pjiz0BGaKfunkxAAcwY6fvOIrvzm1/7ZEktr48/mE7NlKqu2J"
    @"uWy4HU7qjcq2htzwC7/yCz9Jy/bHJG5twXGHIf9jyUaEQkMWrBNFQeb3L8IryKMBiO4gVkL6ii/8xBfZ"
    @"/fdz/1r687nYHoAtWzZSgX/4OyW5G7fp8UXk2n/hC31ab64BOCTeHWBaxdds2ciRhlKwfJFk3gCk5P/t"
    @"15GEpInqBl4Nmd79z0W8DSh6H+IiHNb5v+Yrv/M7v/I/ruhIDsA8z/self27NTpimEwxkNELTCkKuoxL"
    @"J/MGQAhSvrKV/6aDvC+V/9VE2afy+YRE47mTTcDmPmx2br7wswxqtTs373//jzDdAXVKckymJvBJuhWi"
    @"I70orzHzBiD1dmCdyLobIdWn7abIJx+snAM7pDv6ynf+W/QkcfuH7Nx0P3Dnxq8LLLt6haWUK0+YsZBu"
    @"wcQLKP4llHkDcJSSk5C64Zq+ZJCTlQLKubCpvvj3rPPfl43bP/hNdm6aCQWgj8oDmB7BJjsWTF3T2Jzt"
    @"QalSAIRFNwP5MgB++q8iAyRM+m/oRkgX973KC3Zsd8l9hvt/5Yjz36YqDcAfteLiXkDUNj5kwEQMwJ6L"
    @"2wvIvAE4cv6jEZJXsoNsA4BIlEI5B6a+z4wEj5di27bfLjeS+f+Nr1zTpemCNxM4fNS7508PqLgAcsCI"
    @"GWvRLL6wVGCGDcCJ/H9J7iQdeQMjDZnYA5VPJ5Dmnqp8RLIe/ty/X/iNP/idn7kW578CHxD7J48tujas"
    @"BznghjFTpk64xHIhqcAMGwAhSPk6vvz7tGX7T5V/zk1knNt0aDOXvQArz2VnNcWd/8h3+5xlZ6cQmRBy"
    @"ylQqA9feXsCFkGEDcLT81xaR+Pn/6qsU5JWPIoqvBwyYsCQkYEdAhSZd0Wuwzn9P3jn4aOc/Oj7bIRhI"
    @"EDngmgf6Mrvo4vYCMmwAYviXRklcySu+cBOL/5XzYoXZzJ11zoo9FZ7YAjU6DKVk+3d+5oaBdP8lpzt9"
    @"NHaChK1FtErE4+N7Aec+sR9HXgyAJZn/v2HgNgCLa6bzg0mudblmwY6QKm2mbAioSfT/K7/yi8i1Vyl9"
    @"svNvsLOITR2pMQEPzgD4ewE2pVxYE5BhAxCm3xFM9GY8gCuvgyzQ/P+ZMXdWU541ZAOUqNOLGYCv/MxP"
    @"XNMVry349Oo739+I9pKGDBkf3wsobiCQYQNwQCQgYQuABzLzT/P/58fOajCFPntCqbsfuxCgzUAEW/tu"
    @"8IflHGsrkHlEXa64YcIkZS+g8GTZAMR6tOU7UQnHQPL/Dc3/Z4CkDi8ixtnjiRU7kMCtR8/JtZ/D+U8e"
    @"dTSRYMqIETOeKF9SZ2AmDcCRtRy4N8wM/tD8f5aIBq+V5KoySba1zOIrU6VOk4Y0bPHpzn8cq0hcdXmA"
    @"ngyQTzme4l5YmTQAR4j6ua/5iRuGLpJUskB8IIcdzmnz6kb7t+JkP6NHnfOIrU/ZoeN5JsVd7wfkyQDY"
    @"No4+13xxI6Qql/R2ZRxf59f4a5HinqkRLLkOATjf3T/yVgKRJG/QpEldREkv6JaSSQNwsgSoTosufZn6"
    @"a9t/NAOQFaJ3oiQz+aIUerRLc+60enwvoEyFqhMmNyYqdkUZlcAi3mkyaQCOEvUAdGi7wZ+6/LNEEFvw"
    @"0XI/tOrZWE+2d6FOQzIUNdExLPDuf0SenB1rqe1bFcVrtklYyQL23fDHe/ufZe3dCsQAtOjQpZNILMP5"
    @"/ZUPJJMeQGoJUJqrpoO/sknwbEtNlt6vqLq0z4BHJqxkktEFlANl0gAcYDaX7EaSmSBTReU/skue3peo"
    @"evGGCWOmLGWawQWQzRAgLV60c126dGi5QlJFeSuBbFj2ueaGK7o0YtLyhSZjHsCzJUA9hgwu6y1SPpBk"
    @"OVCPbqxOMUYRL7dsegBJfDUZrQBQ3hcrYtIQEZOoHOgCrq98GACrAWinyPVpJzRkFeW1+LsVRq+wLtuA"
    @"1US1YoHJWAhwZApAvA2oqyVAyruQVg5Uo0ZNNgIvoBwoD1YuiDlpbXHSNAmovCf+LlNTtIriYUAhbzV5"
    @"MABGZtqUANXFRSvHasrVEChvI3BCoW269DyZ2YKTsRcYEgYHPpa5/1v3rOqWv/2pLn/l7UQDS82wEDNq"
    @"7vDqKtjVljEDIETOVpSgadKmRZN6wgAoyntgBEy6DLmRQfMN0S0oNNl/gTb679Cl60aA6vJX3g+rV2Am"
    @"F1xx7TyAEgVvCcrYLkCKw2VKgMwQsCt6B0MkFeVtJKcFmXKglisHSv31olyAWTMAcYxlrogK0BdRAdIS"
    @"IOX9MbeaKg1atGlSpyJbgYUm2wbAH+M4EA+gFROUVJS3YWoB7PRiUwtQOVUIVKyLLg85AKva1pMSoKgL"
    @"oNDRmfLp2JRzXGei0GTdAARiles0aEkj8AXsziqfSlyuJJDx5iXnFxSYrIcAgLwhvmumMiDKx2JNQMp+"
    @"U7GSgNm/lxobXPLeEv8nivK++MpTVcqy4+QXBBcqMZhdA+DPA/I/dOErH0dJks4tOnREdrbQIWf2X1qY"
    @"+FCUjyPwUs59Vw1Q4FtOZgzAs6u7wG+CkhkCGWg24JprN3q+wJWnmTEAR4lcf0X5WCJ94KHMMe5KS1Bh"
    @"t5wzYwCOrnJ1/pXPIRKeaUlPYN8bPlNQCvzSFOUV2N29slSe2tazarHVAbNbBxAfKBkfKqkoH0MAblBY"
    @"4xJazzNjAML0NJ+tyioX/Y1QzortCPDLgSsH2sAFbA3OWghwKAVScUJglfTKLEV5VwIpQC+5663A11zW"
    @"DICPzclGRRk6DET5OOKlZ2mfF5DMhAAHBECFGi16DBjQpXUwtVVRPgJ/56ngO1BZ9QCsFEi0J2umAWkm"
    @"QFHekawaAHNskUzjNUM6RS/KUDJF5PwX+JaTXQMQuLpsGwI0NQRQlPcluwbAzmqxScBmrCpbfQBFeQey"
    @"aAD8DKwRBa9Tu6SJrYryWWR3F8CvAywf7MqqGVCUdyCLHkCcgJIYAt8zUBTlHci6AdClrigfSJYNQOj+"
    @"K3gxhqKciywbAHX5FeWDybIBsOjyV5QPIg8GQJ1/Rfkg8mAAFEX5IPJgADQEUJQPIg8GQEMARfkgsmwA"
    @"wpTPFEV5R7JsAPyZrYqifABZNgCgRkBRPpSsG4D0uYAaEijKu5BlA2AW/Z6dfMTLgdUIKMqbyaIB8O/0"
    @"O3Zs2bBmy469J9WoKMqbyaIBsITs2bJizownFqzYsnMjnBRFeTPZNQDG+d+wYMqYCVOWbNjrvV9R3o/s"
    @"GgDYs2XJjBH33DPmiRVbmRmoKMo7kFUDYMS/NyyZ8sAdtzwyY8VWfQDl07iAKy27moAhITtWPDHmkRET"
    @"5qxdDkBRPp4L8DSz6gGA2QPYsOSJKVOeNAegfCrRtnOBr7msGYDI5oYuDbhiyVL2ANQAKMo7kpkQIIAQ"
    @"wqTTZYzAli17XfzKJxG4j8KL0GfGAKRiawHth0qDvh7/jBX4Qn4H0kvNC37FZdcABHLqLyAOe3fCF3xf"
    @"jcExkjedQl97mTEAR8+x744pL+fU+Qr1bCawN5vA5Z627FzxeYHJjAE4SaHfgnfmZR6TFlSnE0oB+poV"
    @"S+lAKfRuQPYNgG3+KeDJf1fCg6/8/4BYSis+Y1kNgQ05Q/YHW8+Frj3JjAE4OvXb5mI1EHgJyW3UKHVq"
    @"B62W8Dd/tbA6TsiWNQumjFzx2bbIt5/MGIAD4jnZaESYckgyf22qKLds2Lji6YAyFapUKVOOmVINB5Az"
    @"sGfPjhUzHrnjjgemLNmyP/ehfRzZNQAWu/TjeVnzE71ok45/CHIZmyh2wYoNewJKVGnQpEGdKmU3aj2I"
    @"PdOln9GQLSueGHHPHY/MxACEbleqYGTfAPjFQKYW0L4dwcU7sPFFa2PYLVs2LHhiInHsDqjQpE2PLm0a"
    @"VKlQoQQJT+DSjWooLegzxoyZFr//JOsGwC8IXkhBcLXIb8gr8HPT5s6/kzO1YsGUCfc8MGbOFqjRps81"
    @"V/To0KBOnQqVRDhw6SbAJAGNCM2MuStAz1rJ/LuRdQOAkwWZMWXKnKa7d1FUt+xFxJe/dfvXLHjiiRlj"
    @"aaMeMWMD1OhyxZgJQ3p0aNOmQY0aZQIXEJhnvFQTEHo3nDVrL4MSXWcFu+aybgBCF5WNeeSRPi1q1C5+"
    @"RyD0tk32Cbd/xETO1i13jJmJB9CRnwwZ0qPPgC4tmhIOBF5AcKkmIAqm9uJPpaSdi3Vqsm0AAmAvsmAP"
    @"3NKjT4cGDUqUz31wZ8TfF9km3P4HbnnkkRFjHhgxZcGWgAotxox5YMCAIUO+xMKBKmUqXLYJCIm6T0wV"
    @"oFYCfjLJCy8UYbApj9wz4IYresVOyzyLTf2Fsmu9YsGMJ6aMeeSW7zwwYsxMUoAr9kCZJQvmTLinx5Br"
    @"pkwY0qdNR8wAbnfgskxAFE5ZGfrC9wBYsmYADjGxrZUGnbnarAt4c1KxOyBRxtrc90fi9t/xnZGcqSVL"
    @"aaUOKLFlxZInGnQYM2Ym4UCfAVd06SRaXy/DBISx/+9ju00nHlCUU5NNAxDPSu/YspLk1oL1ResC+vcq"
    @"I5k+4oFb/uOORx7FCMykiHXj6SgEbCmxZkGNJ2ZMmHJPX4KBOV/YA00CyhTn+n7NmQ3ZsWbJnLknQl/w"
    @"Ky17BiC+t29z3Ds2bNhcQn/WM+fG/Gv0EueMueU//uZvvvPImBkzZixZsWYvF3B0dwvFazCbqnNGdBhw"
    @"xYw1O0wAEJUIXcpZtq/UbAA+MWXCjAVrdmleQLFsY8YMwJGOgLQ6wMsjfvffMGfMHf/wF9/4Szb8Irc/"
    @"untFBVMhO0lvmdzBjIZMXNgDFepUqVFxeYBLIXCmcc6EBx4YiQh9gWsADRkzAEdQZSD/XCANKyNu+Yf/"
    @"40/+4m8eJd8fuf1pdYLmO8YArKlQZcGCNVCiTosGdSpU3WMuxRBE+ZQHbrnlnglLmUJRaDJmAMJTP7I5"
    @"2mRHQNG8suMEruJvxZQH/uMv/uQb/3DLjDnr2LlJv3NZJ2uHMSQ79gTUadLjih5tGt5eQLGNgN9EZbeb"
    @"H7nnTryptGxTwUxCxgzASUJvUGgk1hRQ7Is0evX2X3OpTrjlb77xF/9wx1jSo6dlv+K5lZ37qkSTLo+M"
    @"GdKjRZkyFN35TeT/t6yZM2UkUyhsurngV1YeDEBUnrlkzhNzljSkiv3SsANTZzzwH3/zF39zy5gnNuzY"
    @"vdAc+qZzQ+Au/EeG9GhKw/ClEO2oGBWAEVPmKff/Qp6RjDU5pFb4mgt1K7VuUTXA/mLcf/8y3Mu8pBF3"
    @"fJeRaQs27N25CFIef3gn98tejQZO2gSmop/dwJ2BFTPGIgPyxNKbRB39chiERTshefAADusB+7SoS0dA"
    @"8YmLVO9dWdSjlPrOZRPvte66LSiKot87evToUI/tBRQ3wIryIWueGHPPrYyhXV9CAhDyYgCQHK0pY+25"
    @"NpbL6geIu6oPPDBmKrHqKef/lEi42f4KZAhrlw49ujSlRShj/uEHsXdDaL/znVtGzFldSrl5Pt5ie+lb"
    @"J23Kouhijd4rt5/tJVE14VE6/W0oZAkSjwxjj49/7f/mTpbAI/c8SgJsl/A8ioWVmo1CoBkjHtwY+rQa"
    @"wLCImnTZNACH8ae5+JfMmDihhksqCgpjjup//Md3Ho5uVcFLo3fzWybAMubV1BMuLmAQa6SgFOX/rU8V"
    @"rwEsaghEXkIAuw+wlo42o3R3OaNCzabdSop//uYb3/iXB6ZiCNMf8fLnRhquZm4voEuDEqWCNggfdlRM"
    @"3PbfkQRgUcmkATgyKHTvlG5Nm0tyZENxLtD4ybDFP2tmPMrm37/cMT46MD0k4Hi+OoTY2bXPvxET8CCq"
    @"CyWRCyt7z1oc7Aygjfg+dvmnmtSgsOYgkwYgFSt1vXbjwtdsqRS6HOh48c+/3Evp7/7glf/IeYj+wj09"
    @"mjSoYgLEqmgF/egzZxkTVs0Zccctd7EOgAshPwYgitcWPDHjicXFlAPZvf9HvvMPf8v9f55y/7em8Ef+"
    @"xpYVU+5piFgolAhoemOyi4bNq1gDML6k/L8hkwYgPPZta7EnjJkwoEWNKiWCAhat+nXqplD1iQkP3HMv"
    @"evUbafnxlmbwgsV/ROTO+gAjam6AiJEMrcrfKOI53ovi5ERKoNLz/wWuisqkATiKdVMfpGSlSZ0q1UK+"
    @"MwYT4Jg89Ux2/23xz/ad/86ODQBlmSJUoU6DKrVYc1CRiETAzSTAhaSWo9d6dGJdUciTAbAd22Pu6dJl"
    @"QIcm9cJ2rtlxlTs3re7RiX3ZKghXC/nqNJUvLWbDBhP9loAyNep06Eo+oIhn2GaVVqKisDyiNlXg5Z9R"
    @"A3BUFiQa3GTkr55kUEj0wCJdoPZV71z5zyMjZl6aKvB/LXn+jhF4DwnT/taCEjXadLnhhj4d6p4Kc973"
    @"W+ItwHZfaS33/oPlX9z8vyGTBkAID5JPh02bfdpUKMfm3eb58oxehf3XLMkJ93znOw9Sp/cReWpbG7ci"
    @"oMZIeg0GdKlTpkypIOfWnl1bXGYmKK4vU2w2ywYgSRgrhzXxcJeWRKhRI2FRLlOw+/9zaVS59cZVvssr"
    @"DXwvwFYF7t10vEceGdCVfQHba5j3JWIrK7ZS/DS9yNpSIcMG4Gg5kJ0U9MA9XVriAVQK4wXEa/Cj+n9b"
    @"/b890gh9qvjn5B+RR7tncaXBIx4Y0KdNjZqY2XwTiaJZXYWJFACt0ytLi5v/N2TYAKQStQU90KFJTRJU"
    @"gbQHF+e9iu5Sc6bSBGWyHhuRqox+831z1aHndfTp0KNNnXos0Mo3dkN55ioAJiKodnHkzQD41VsNam6q"
    @"nSlbKYqgdTL/P/bq1Ddeo8p7Lv3Qy/TvXXfgHV2ZHtQs1F6ALQF+FAlQU1bllwDl/RW+kAwbgNhVnVSz"
    @"Mz5AlTJVKlRFy7ZYgtZR/v+BB4n+U6bV/9gLdpYjzVxGJsAkW6cMWFP30oB53Avw8/87UUGaxPaTCj8F"
    @"4JAMGwDhcFpgKOKXJiKtUKFGkxr1QtyjoijV3P/Hkv+/Z3Jwl3q/v5f83s41yZjQoyh7AdazssvfaADO"
    @"pLAq757jD5BhA+BuNcm7jUlSGQNQok6DDgM6tKi7MCDvhC7/P+FeGlVMBcBHXKTJfgJbFxjdIwf0CrAX"
    @"EMhri3aSHmPLP9lUdQFk2AAYYkGuH6WGrJlTpUWXB8YMWbERQWv7kLyZAitRbWVQ106pdpwQQg2TD3pL"
    @"IBA9S+xYtlKB8Ch7Aa1c7wVEsxKiPQ6rq5S6BZjHF/l6Mm8ADMFhD/ueDSWeRMXmkauEoHWe3z9bohrJ"
    @"dY9FqGL/aQ54pEB0R48OXdo0YjWBeSRq/xlx61SV47pKeb5yXk2eN3bsPcoukkjQOszpXcrvzFuzdNt/"
    @"vk59vFYtJAw+5sVGG65mq8zUIPoNyPlxkcNYAtB/VffyqnZvePZck3kDEHKgZun7AbYo6J57r04++nn+"
    @"MELd9u77wL1M/UuVQHuPpX9U6jIalzWWIGTu2mWsqGZeznB0mvaeCNjIy/8feFZFlAA9JCchQCrRZtUD"
    @"Pbp06dKkLqmq/HkAh/o/Rv7T7FKvP12oYg+eYNYjI/p0qeVublBkqpI+YzRVIUx91AWQeQ8g8D4O8HfK"
    @"72KSzv7v5I2oAci8qpH3qj5g4blzG8+C2w2z+P0yLkSeBzMQ5UjjhVUPIi+f1gIcmgKJPN5FXkvmDYAh"
    @"JAxSkrShFwQ8xhy6+IOzT+RSh85Jta73iSkI4bt1qx41sVvPxD7EfJE8rI4w4fyb+sZbvnOXkv47fS4K"
    @"SX5CgEj8M/6dndcg/MhVQtA6D4s/ThSjRrP6VjIPOW3q38cSihrhmDuZG5SnvQBf/nvHiiUjbvnXk1WN"
    @"3y4uZdV75MQAxEQs/KbfqGBmJh3sXbcZGGkF5qF2LZL/3kj+Py5U/cFCFaH9Jzj49k6y5vcMuGZIlxZV"
    @"Tyk4qwsnLv1hVRX+5S++8TffZaR6imdV9A5An5wYgBSioqCdSwXeSoegUbT3U4F5MQHRHfeeOyf/cU6d"
    @"2njkPJa+gBplz7Rm8ez6KdUdWxaMeeAf/uJPvvEP90xZSmVlFo//k8ivAYiwsd09LapU3KXZkNeXH5kQ"
    @"m9MwxszW/3++AfBTgaZ01lbOm72ATm6EQo1XtWbJmDv+5U/+j2/8xS1jZl5nZTL9eTHkygAclQvfi1ho"
    @"pGhvnP9SLBDIA/uYAuDxQZXv7qamBFnRd3bOBDwyYkBPNluzfW79pmozU+FvufvfecnMmPBc0RUAD8mV"
    @"AUjByICaffOSt/QDSmIAokAgu9FqhAlojFJ9pP+7P/Nx27kEYx64pSuC7LUMJ8vjM5WXTLnjH77xjb+9"
    @"AeAXKACSJI8GIBK0tl8bK2+aaI3Th/zfBALl3OgF+kNQF9L/H69SO8fxm8zEXPoCegzo0maXg52AaKbS"
    @"LX/zF/9wy8g5/955vbx7vyFXBuCIoHUoCz90936jDpQeCGTdBBhZzh1btuxc+a/3cj/yUn1mL8D4AFdu"
    @"hHY2F0386HfeMBmTVp17UxXcRfVyWfVikSsDcBRbRLPyzEDAHpwBqDofIOuzA0wp0N4t/vMVpPtnKZoe"
    @"PGWaaQ1d31z6wiZGVWlyudIf6eTWAMQahKPJNiEhJZf8AdgTENKk7n4z616A32oTtaie85KNJjMvWbBk"
    @"5Vzo7C6kPYFXxvzoRqqt2LLDXjNZvg4+hRwagCOC1rbae8MC2yZXknDAuHq1XAwRC1zAckR64yPLVE7s"
    @"BSBeiQlNsnn3j15GpGlkSpjupfLfKir7J9EPr8595J9ODg3ACcw++lIivNDtCCB5dH+MaFZNQHaPywYn"
    @"+zOHJqeOMTrWLVtJW/7Hv/zndf4fO/Lsbmh+IMUxAFFpcNzK7+XCtX6C2SrMFv6FGy0y38XOwqUZJj6y"
    @"Rnz5r1gwlsp/s/c/9UTVTj3+osihAYgJWkeuXHogYEKAisy6j4pXsvN2x3UAjZu9Syz/lNf/8YeU8odN"
    @"YFJy+ypZMqXRlWCm/sQr/83ev52pGMTO+itnKhWLHBqAZ7GBgN1AK1GhQoMGVaqUMipsbRuBN6xYSqoq"
    @"i3fawyPKguscv/ubjb87/uFP/uT/+Edm/0QzlbL3/p+JPBuAdEX7SCfAvtkVkQ7v0KAhajbZqwjwdQBm"
    @"zKUG8PxLK36MoewI7L1dgPMfY7Ltd8GEW/7l//j/5P6fnP4Xn6l0/ldwNnJrAJ4NBJAC4TIN2vS4YUaf"
    @"DTXwTEAW7gXWZO08IdAxT6laNZ92QEdWRRSk7GJ7Aec8k3Hn36gYWuf/L/7l7nhP5fnf/HOTWwPwDKGr"
    @"DQyoyyjxeB9bdA/IxlUQur77O+5ECHTripmyQCjL3wYpG7ZUz94UnHT+zVDTf/g//uRP/uZOon8t/kkl"
    @"/wbgWCAQXa5WL+iBHm2pCcyerKVVAh6JEsA0pr53+vV+7jEueJIwpU5VzuS5jFSa82/afv8//hLnf87K"
    @"3Q4cl1r7nyTnBsCl820gkBwKEnq14Pd0aVOlLBOFS2QnF2BDACvCfR4dgOeOce8UGEeM6NOkRuWMxvTQ"
    @"+beZ/z/5S1J/C2+eEqTU/p//zT8nOTcAjmMLxXaDjbilLaOtAFped0BWTIC9v86YMZdy2ywcmX+EdpEN"
    @"6NGnRSNWX/nZx2P/TXP+/xI95Y1T/cvSucwMRTEAlmQ0Gooc1IRbanLvN3f9pgQC2ckE2Hr7FSvWKTVr"
    @"569e2Dtvqs+AawZ0z1YU/Jzzf+ec/8OhH1nyq85MAQyAtx+Q9tZGijDG+bfdAYEIh5pAIAs9gqHLWxzp"
    @"AzxL3BrXXYgUiyc8nXGrMnrH9jIexjj/32LO/zrN+XeBQ3jp7j8UwgA40pawaQpZuwZhs8Csqdg7VZvz"
    @"5wLMEezlGE9UAn7iEaW1A21YMmfGk2ytncMDsFu4e5BZP6NXO//qBQDFMgDpe/smdWW+u5fFHt31Q+cJ"
    @"nNsEBN6/Wbkxxc+llS3fsmYtQcq5lr9Vfzru/B9qKfmPVoTCGIDkxJAYIVvgidBz/hHNoDK4ISLBmUuD"
    @"Aln+R8f0JF/pxx5M9DdjBxGXK/ls/HDtlPO/U+f/JRTGAPjExELARq++VuBeFANDoElIlcMWkc/FH2GZ"
    @"xR4Ae5TxluDP//vRcRjnfyxFv0nn3wZ66vyfpJAGIBWjEDT37h/2AjHVdmWQQOA8vMDoZOauda7hef7y"
    @"34t8+jHnP37AuuiPUDADkPI+x9uE104x0CoFRRKiFe9pzrPWIuc/A4LbR9fMubIU8Y2/aN8/cv7HoqN8"
    @"rOxHnf8DCmYAjmIiR+P2JwOBvQsEKu7ijrT4Pu8I7TZgFAxkpQsg7WjP8xfNudnKrB/f+b9zs37U+X8F"
    @"BTMAsfc8mQkAs+zX0gxkHP6SPNAGAiWXCvz4fQF/fKWvBJQJxb0TPYGfT5T/tIU/U+75j2/8yZ/8I0PU"
    @"Nur8v5aCGQBDSlFQPBBYYZd2IAbABALllAz8x5kAvxfd5NU3kr7KhAHIEGHiqy1LEfz4i2/8yx1jp/d3"
    @"zPnnclV/TlFIA8CxG5cfCOyw4cCeHaFcPKa9BeImI/r6o47VFtg8sRDNfR1bZYirIu5lTuGUB/7z5L6e"
    @"jgz6TD6LkqCQBiDmvKYtX7P8F6JtZwOBANjRouZ07wLvyT6mQsC2LdvhmxOm3thKxccUIm2lZ/KRW75z"
    @"60aoH3pNFy33/VIKaQAcxwIBWyBs5weaDUArJt2kSpWKmAGfjwkHQpkIPOaRex5lJKiGARDPkuyxar9T"
    @"JjzKrB87puxY4vb8LVSZptgG4LlAwDj/pmB0J32DA9EObFCVXnc/pvwIExC6luU7d0fbXHQIcHgvN6bZ"
    @"hkn33HLnhn2YxmnN/P8QBTYARwMBv1XYBAIlStLoMuOKPm26dGmI4k05EQy8twmIREseeWTELMOT9z6T"
    @"6H2yZ2jJhImU/t7y+BLVJHX+T1NgA+BIdwJNILB1P91JV9mQIX2uGIqOcBQOWN7bBIRS025yADPXZXep"
    @"bSxh7PPAEyIZc889j9xzy3cZ9eGbSnX+X80lGIBTgUDIRqJ/swTv6TNkyBe+MKRHhwZNGlRE/S5yK97T"
    @"CFixrQULFilqwJdwGwsPvrIdETuZ8nPPLf/wnXseGPHIPZOEATj1jEoqhTcAzwQCJvO/YSF3mTEdHhky"
    @"ZcaYAX269OjQ9LoI33f5R+PAdmylku3gkr6AcpZkJ6YVR9mLrOsd//IP3/iXe0bMeGLm6f2lPqHyPIU3"
    @"AI7gxH1ii1XlnzFhypgJY4YMGTLghiv67lmiR72vEYhPBCz+gk+eAftvVO1ntvy2sun3L9/4i2/8x4gp"
    @"S1as2DrJj8PSrUs7gz/I5RiA48vfxpkmy7wQWc4JXQYMuWbGkjUhIU3whna/j7Bs/NK9rMUfpny1l+Vv"
    @"c/52wPfffONv/uGeqRT9bkU9yTzWT9Fezhl8MxdiAJ7dEYimCO/YsWLJnCaPPDJmKd3lpnfQVxN+b08g"
    @"I1Ign0aa2x9KUfSSBTMmzBjzwD3/8DffuWPsCqWiMV/eE+rifx0XYgAcwUlPYC/1AGvWLKkxYcqMNVu2"
    @"WM2gJtUUjdnCrc1PIDz41wqObVgyY8YD94x55JEHvnPHoyz/Tcq7GJLd3skMc2kG4NRAUYOJPbdsKLNg"
    @"KXlmU2m2A/ZOC98vEXrP9uGiX8bhwedhwu1f8MSEEbd8l9qICSMmPDFnJTX/rvAnSHte5YVclAF4wUBR"
    @"e2HtXV+enc5n5wmatqEKJVES9OsD3vMwn/tWvonO9j7F7Z9KUZQxAGOmzJmzcPd+/72yTX5a/PNDXJQB"
    @"eBHmQtrJ/+0YbNtBGLJlwJo6NWoyZSCpR6rX33GOu/1rVsyY8cgdI0Y8MuKee1catWIrW6TKO3KZBiA8"
    @"+r14LtkIiluxcVOPvmRGnzZNWtTdbLx4sTDec73P0eWdY2U+ezasWXlu/x3/8cCIsWzHLqQycutkSH1x"
    @"EDW2b+QCDcCRHYHg4FcCVyY0J6BEIO1CY4b06NGXtiHTL0BsRl4RF/Fb8c/w3nP7l8wYM2HCiEfu+M4D"
    @"Y2bi9m+cwv+hYVXn/81coAF4Bcb138iWk9kenDDgigFDbhjSoU1DwoFyYkzmj4UD+TIdzx1tmPK57/Yv"
    @"eRK3/5ERj1Ltr27/p6EGAI4t1Wh20FY+N1KUtkBoyoQBPVq0ZPJw1dsd+NFwoAg3sWMhlu/2r3lizpwJ"
    @"I+75j3tGjJgyeZXbny9zmUEu1gAceOvHHEybDVgDG9Y8MWbMiDEzxgwZuHCgSZ0KlYsKB4JX/GQvW32m"
    @"7SnN7Z+yELd/4y3++ODWpGFVpb83cbEG4MXYXQFjBIwc1VTEux4YMGDIFTf06dKmTl3GkJcSCcU41rdI"
    @"y4vnh5CoePmEIJcT89rJ8PMnpoy544FHyfjfS9RvZg7uxe3XJN+HowYgSXgkGNjL/7esWIsyzSNd+gy5"
    @"YcqVhANtWolw4BJ1ag4HnZmYf84TT0wZ8cB/UttnDOqcJSt27Jweoi/LHvfPwtjfUd6AGoBkSJnUAY4X"
    @"CNnKgC0rlkxpMWLEhBkjhgzoMpBNQhsOnBqjFbj/Au/v5OWuF4iWUklE1ZPReegk13bScj1nzIiJqB9+"
    @"516KfBbPuP0cC6jycqqyixqAJMfczmj0uFEPXLFi7sKBCXcMGDLgOjUcODa+2KoC74+60tnFb2Iue9t0"
    @"0Rhxs6i3EvfPmIiSn3H809z+gnY9ZRc1AIfEe9Pjn9m9ge1BOPAguwMjCQe6tF04UPZMQHL2XyQHElUc"
    @"ZhtfwMQsclzJtPm50Vc0Ckcr1mzYsGDKiO/c8siIKbMDt//Y+xAkvo59U3kbagBieN0C/iyAWO25EIUD"
    @"GwkHzO7AlBmPsjswoE+LpssHWLe5HNsutE7yNjfTAKx6gknpldiJrHrgzTlYMGfCmLno9s6ZMeKOO8/t"
    @"X4ukR1qRzzGfSZf+u6IGIJ3w2Z9aZ3UnC+GJOlPRExqIsuAN1/RoU3c+QIkKFWoiNBoQuFLYOUvWuTAC"
    @"oUzneWJMhxINqs4AmPaeHWuemPDAPROeWIqfNBPV4zkrNjLL5yVuf7bPR65RA5DC4YjR2DcOpwzZO6Lt"
    @"Z7PhwJgJfbo03NzBCjUatCRJGBDIlPux3BfXZH0yYDTH6JFbSixoUBED4E9fnMmcg7GId69ZsuRJzEHU"
    @"aRk/81l+5YVEDcBRngk5k5Xte5ESWbFgQkuW9Jg+HepiAErUaNGhT482VcqELJlyzx13MhNom/HCVyvS"
    @"PeY7JRZ0JccRNwBrZlLWO+aJJVs2Lmg44faH6vZ/MmoAXsbxkpTQCwZsOFBlxky62k0i0Mb+DboMuGZI"
    @"nwYlQhaM+M43/uY7I+apU+7OT5SIsw7+AwEL7mi5oqdoz34nmj6mXnLhFPz23p3/Occ/e+egkKgBOEri"
    @"2ky9IA/CgX0sQTZnTIM6FaBEiQpNulwx4oY+TcrsWfDId/7ib24ZM8/8VMBQ+iNhy4wmVclvxM/Czu2O"
    @"LCWssRudBxkOdfvPiRqAF3EyHEgrf7HyVjNJ90FAWTyAEWMe6dEUD2DMPf9xy4MbCpYlDn2fkC1L9mx4"
    @"cuNS4np8ociqmR3+uMN/cNbU7T8nepZfRPKm9cwvGv3gEmXKEv0DlChTo0VXcgA1SoTSXmSFrzZsnU6e"
    @"V3tw7rcpJrsVSEBTcanNQ2y//0sd/pTTfO7XfBnoWX41zxiDqHYg+gC7bCrUaNKScWOmpMhsAs6dsxz6"
    @"EfW5HeTQf5X+kQUxYdS0B8Zd/lMVlkdPpvLR6Bl/NS+8YtP2DYwJqFKjKsVBocy/WTsR0oQ2QUYMgP+a"
    @"0ucqvPhJTv1UL8fPRs/4q3lBOHA42DNyngMJC+y84b0rBI4i5Uzc+9/hPCUbq478WvJkKZ+HnvE38eqr"
    @"Nx4cmKeI99RHHkAm7ozuIIIXxvGvPnF6CZ4T3QX4XOwcQkhZ5t53s4hO3ikgagDej+f0a2KT7KIpdi/e"
    @"YTj3q1MKSFYvt9zxrss4cw7yG1+dxvmZpfT2p1AOeK9rvChrpSivo4CoAfgIXuouv0ZVP88U5XUUELXN"
    @"H8wrvd/MOf9KsVEPQFEuGDUAn4m6woqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqi"
    @"KIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqi"
    @"KIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKK/h/wcG"
    @"hacUwEae1wAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAyNi0wMi0yN1QxMjo1MDoxMSswMDowMMXFoWQAAAAl"
    @"dEVYdGRhdGU6bW9kaWZ5ADIwMjYtMDItMjdUMTI6NTA6MTErMDA6MDC0mBnYAAAAAElFTkSuQmCC"
    ;

static UIImage *wcpl_repeatButtonFlameTemplateIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSData *data = [[NSData alloc] initWithBase64EncodedString:kWCPLRepeatButtonFlameIconBase64
                                                          options:NSDataBase64DecodingIgnoreUnknownCharacters];
        if (![data isKindOfClass:[NSData class]] || data.length == 0) {
            return;
        }
        CGFloat scale = [UIScreen mainScreen].scale;
        UIImage *image = [UIImage imageWithData:data scale:scale];
        if ([image isKindOfClass:[UIImage class]] && [image respondsToSelector:@selector(imageWithRenderingMode:)]) {
            image = [image imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = image;
        }
    });
    return icon;
}

static void wcpl_applyRepeatButtonFlameIconStyle(UIButton *button, CGFloat buttonSize, UIColor *tintColor) {
    if (![button isKindOfClass:[UIButton class]]) return;
    UIImage *icon = wcpl_repeatButtonFlameTemplateIconImage();
    if (![icon isKindOfClass:[UIImage class]]) return;
    CGFloat inset = floor(buttonSize * 0.22f);
    inset = MAX(3.0f, MIN(inset, floor(buttonSize * 0.30f)));
    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(inset, inset, inset, inset);
    button.imageEdgeInsets = edgeInsets;
    button.contentEdgeInsets = UIEdgeInsetsZero;
    button.imageView.contentMode = UIViewContentModeScaleAspectFit;
    button.tintColor = tintColor;
    [button setTitle:nil forState:UIControlStateNormal];
    [button setTitle:nil forState:UIControlStateHighlighted];
    [button setImage:icon forState:UIControlStateNormal];
    [button setImage:icon forState:UIControlStateHighlighted];
}

%hook CommonMessageCellView

+ (void)load {
    %orig;
    wcpl_setupRepeatLifecycleObserver();
}

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UITapGestureRecognizer *wchook_doubleTapGesture;
%property(nonatomic, strong) UILabel *wchook_messageTimeLabel;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

%new
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return wcpl_isRepeatTypeEnabledByConfig(config, msgWrap);
}

%new
- (UIImpactFeedbackGenerator *)wchook_repeatTapFeedbackGenerator {
    UIImpactFeedbackGenerator *generator = objc_getAssociatedObject(self, kWCPLRepeatButtonTapFeedbackKey);
    if (![generator isKindOfClass:[UIImpactFeedbackGenerator class]]) {
        generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
        objc_setAssociatedObject(self, kWCPLRepeatButtonTapFeedbackKey, generator, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return generator;
}

%new
- (UIView *)wchook_repeatDisplayAnchorViewByNFQPrinciple {
    SEL selectors[] = {
        NSSelectorFromString(@"getContentView"),
        NSSelectorFromString(@"contentView"),
        NSSelectorFromString(@"getBgImageView"),
        NSSelectorFromString(@"bgImageView")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![self respondsToSelector:selector]) {
            continue;
        }
        @try {
            id candidate = ((id (*)(id, SEL))objc_msgSend)(self, selector);
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 16.0f && CGRectGetHeight(view.frame) > 12.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *kvcKeys = @[@"m_contentView", @"_contentView", @"contentView", @"m_bgImageView", @"_bgImageView", @"bgImageView"];
    for (NSString *key in kvcKeys) {
        @try {
            id candidate = [self valueForKey:key];
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 16.0f && CGRectGetHeight(view.frame) > 12.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return [self wchook_bubbleAnchorView];
}

%new
- (UIView *)wchook_bubbleAnchorView {
    NSArray<NSString *> *priorityIvars = @[@"m_bgImageView", @"_bgImageView", @"m_maskImageView"];
    for (NSString *ivarName in priorityIvars) {
        @try {
            id candidate = [self valueForKey:ivarName];
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 20.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    UIView *bestView = nil;
    CGFloat bestScore = 0.0f;
    CGFloat cellWidth = CGRectGetWidth(self.bounds);
    for (UIView *subview in self.subviews) {
        if (subview.hidden || subview.tag == kWCPLRepeatButtonTag) {
            continue;
        }
        NSString *name = NSStringFromClass([subview class]);
        if ([name containsString:@"Head"] || [name containsString:@"Avatar"] || [name containsString:@"Label"] || [name containsString:@"Button"]) {
            continue;
        }
        CGRect frame = subview.frame;
        if (CGRectGetWidth(frame) < 24.0f || CGRectGetHeight(frame) < 16.0f) {
            continue;
        }
        if (cellWidth > 20.0f && CGRectGetWidth(frame) >= (cellWidth - 12.0f)) {
            // 过滤整行容器，避免按钮锚到 cell 而非气泡。
            continue;
        }
        CGFloat score = CGRectGetWidth(frame) * CGRectGetHeight(frame);
        if (score > bestScore) {
            bestScore = score;
            bestView = subview;
        }
    }

    return bestView;
}

%new
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf {
    if (!button || !bubbleView) {
        return;
    }

    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();
    id buttonWrapObj = objc_getAssociatedObject(button, kWCPLRepeatButtonWrapKey);
    CMessageWrap *buttonWrap = [buttonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)buttonWrapObj : nil;
    BOOL mediaMessage = wcpl_isMediaBubbleRepeatMessage(buttonWrap);
    NSValue *cachedFrameValue = objc_getAssociatedObject(button, kWCPLRepeatButtonLastFrameKey);
    CGRect cachedFrame = cachedFrameValue ? cachedFrameValue.CGRectValue : CGRectZero;
    BOOL cachedFrameValid = !CGRectIsEmpty(cachedFrame) &&
                            !CGRectIsNull(cachedFrame) &&
                            !CGRectIsInfinite(cachedFrame) &&
                            CGRectGetWidth(cachedFrame) > 8.0f &&
                            CGRectGetHeight(cachedFrame) > 8.0f &&
                            CGRectIntersectsRect(cachedFrame, self.bounds);

    CGRect bubbleFrame = [self convertRect:bubbleView.bounds fromView:bubbleView];
    CGRect bubbleFrameFromSuperview = CGRectZero;
    BOOL bubbleFrameFromSuperviewValid = NO;
    if ([bubbleView.superview isKindOfClass:[UIView class]]) {
        bubbleFrameFromSuperview = [self convertRect:bubbleView.frame fromView:bubbleView.superview];
        bubbleFrameFromSuperviewValid = !CGRectIsEmpty(bubbleFrameFromSuperview) &&
                                        !CGRectIsNull(bubbleFrameFromSuperview) &&
                                        !CGRectIsInfinite(bubbleFrameFromSuperview) &&
                                        CGRectGetWidth(bubbleFrameFromSuperview) > 8.0f &&
                                        CGRectGetHeight(bubbleFrameFromSuperview) > 8.0f;
    }

    if (CGRectIsEmpty(bubbleFrame) || CGRectGetWidth(bubbleFrame) <= 0.0f || CGRectGetHeight(bubbleFrame) <= 0.0f) {
        bubbleFrame = bubbleFrameFromSuperviewValid ? bubbleFrameFromSuperview : [self convertRect:bubbleView.frame fromView:bubbleView.superview ?: self];
    }

    CGRect menuRect = CGRectZero;
    BOOL menuRectValid = NO;
    if ([self respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRect = ((CGRect (*)(id, SEL))objc_msgSend)(self, @selector(showRectForMenuController));
        } @catch (__unused NSException *exception) {
            menuRect = CGRectZero;
        }
        menuRectValid = !CGRectIsEmpty(menuRect) &&
                        !CGRectIsNull(menuRect) &&
                        !CGRectIsInfinite(menuRect) &&
                        CGRectGetWidth(menuRect) > 8.0f &&
                        CGRectGetHeight(menuRect) > 8.0f &&
                        CGRectIntersectsRect(menuRect, self.bounds);
    }

    BOOL bubbleRectValid = !CGRectIsEmpty(bubbleFrame) &&
                           !CGRectIsNull(bubbleFrame) &&
                           !CGRectIsInfinite(bubbleFrame) &&
                           CGRectGetWidth(bubbleFrame) > 8.0f &&
                           CGRectGetHeight(bubbleFrame) > 8.0f &&
                           CGRectIntersectsRect(bubbleFrame, self.bounds);
    if (!bubbleRectValid && bubbleFrameFromSuperviewValid) {
        bubbleFrame = bubbleFrameFromSuperview;
        bubbleRectValid = CGRectIntersectsRect(bubbleFrame, self.bounds);
    }
    if (!bubbleRectValid && mediaMessage && menuRectValid) {
        bubbleFrame = menuRect;
        bubbleRectValid = YES;
    }
    if (!bubbleRectValid) {
        if (mediaMessage && cachedFrameValid) {
            button.hidden = NO;
            button.alpha = 0.96f;
            button.userInteractionEnabled = YES;
            button.frame = cachedFrame;
            [self bringSubviewToFront:button];
        } else {
            button.hidden = YES;
            if (!mediaMessage) {
                objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
        return;
    }

    CGFloat cellWidth = CGRectGetWidth(self.bounds);
    CGFloat bubbleWidth = CGRectGetWidth(bubbleFrame);
    CGFloat bubbleMinX = CGRectGetMinX(bubbleFrame);
    CGFloat bubbleMaxX = CGRectGetMaxX(bubbleFrame);
    BOOL bubbleCoversWholeRow = (cellWidth > 20.0f) && (bubbleWidth >= (cellWidth - 12.0f));
    BOOL bubbleTouchesBothSides = (bubbleMinX <= (kWCPLRepeatButtonEdgeInset + 2.0f)) &&
                                  ((cellWidth - bubbleMaxX) <= (kWCPLRepeatButtonEdgeInset + 2.0f));
    BOOL bubbleAnchorSuspicious = bubbleCoversWholeRow || bubbleTouchesBothSides;
    if (!mediaMessage && bubbleView == self) {
        bubbleAnchorSuspicious = YES;
    }
    if (bubbleAnchorSuspicious && mediaMessage && menuRectValid) {
        bubbleFrame = menuRect;
        cellWidth = CGRectGetWidth(self.bounds);
        bubbleWidth = CGRectGetWidth(bubbleFrame);
        bubbleMinX = CGRectGetMinX(bubbleFrame);
        bubbleMaxX = CGRectGetMaxX(bubbleFrame);
        bubbleCoversWholeRow = (cellWidth > 20.0f) && (bubbleWidth >= (cellWidth - 12.0f));
        bubbleTouchesBothSides = (bubbleMinX <= (kWCPLRepeatButtonEdgeInset + 2.0f)) &&
                                 ((cellWidth - bubbleMaxX) <= (kWCPLRepeatButtonEdgeInset + 2.0f));
        bubbleAnchorSuspicious = bubbleCoversWholeRow || bubbleTouchesBothSides;
    }
    if (bubbleAnchorSuspicious) {
        if (mediaMessage && cachedFrameValid) {
            button.hidden = NO;
            button.alpha = 0.96f;
            button.userInteractionEnabled = YES;
            button.frame = cachedFrame;
            [self bringSubviewToFront:button];
        } else {
            button.hidden = YES;
            if (!mediaMessage) {
                objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
        return;
    }

    button.hidden = NO;

    BOOL effectiveIsSelf = isSelf;
    CGFloat anchorMaxY = CGRectGetMaxY(bubbleFrame);
    CGFloat centerY = anchorMaxY - kWCPLRepeatButtonTailInsetY - buttonSize * 0.5f;
    CGRect xAnchorRect = bubbleFrame;

    CGFloat centerX = effectiveIsSelf
        ? (CGRectGetMinX(xAnchorRect) - kWCPLRepeatButtonEdgeInset - kWCPLRepeatButtonTailInsetX - buttonSize * 0.5f)
        : (CGRectGetMaxX(xAnchorRect) + kWCPLRepeatButtonEdgeInset + kWCPLRepeatButtonTailInsetX + buttonSize * 0.5f);

    centerX = wcpl_repeatAlignToPixel(centerX);
    centerY = wcpl_repeatAlignToPixel(centerY);

    CGFloat halfSize = buttonSize * 0.5f;
    CGFloat minX = halfSize + kWCPLRepeatButtonEdgeInset;
    CGFloat maxX = CGRectGetWidth(self.bounds) - halfSize - kWCPLRepeatButtonEdgeInset;
    CGFloat minY = halfSize + kWCPLRepeatButtonEdgeInset;
    CGFloat maxY = CGRectGetHeight(self.bounds) - halfSize - kWCPLRepeatButtonEdgeInset;
    BOOL didClamp = NO;
    if (centerX < minX) {
        centerX = minX;
        didClamp = YES;
    } else if (centerX > maxX) {
        centerX = maxX;
        didClamp = YES;
    }
    if (centerY < minY) {
        centerY = minY;
        didClamp = YES;
    } else if (centerY > maxY) {
        centerY = maxY;
        didClamp = YES;
    }

    CGRect targetFrame = CGRectMake(centerX - halfSize,
                                    centerY - halfSize,
                                    buttonSize,
                                    buttonSize);

    NSValue *lastFrameValue = objc_getAssociatedObject(button, kWCPLRepeatButtonLastFrameKey);
    CGRect lastFrame = lastFrameValue ? lastFrameValue.CGRectValue : CGRectZero;
    if (wcpl_repeatRectAlmostEqual(lastFrame, targetFrame)) {
        [self bringSubviewToFront:button];
        return;
    }

    button.bounds = CGRectMake(0.0f, 0.0f, buttonSize, buttonSize);
    button.center = CGPointMake(centerX, centerY);
    [self bringSubviewToFront:button];

    objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, [NSValue valueWithCGRect:button.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (didClamp) {
        WCPLLogDebug(@"Repeat button clamped to cell end: class=%@ bubble=%@ button=%@",
                     NSStringFromClass([self class]),
                     NSStringFromCGRect(bubbleFrame),
                     NSStringFromCGRect(button.frame));
    }
}

%new
- (NSInteger)wchook_repeatButtonStyleStampForCurrentTrait {
    if (@available(iOS 13.0, *)) {
        UIUserInterfaceStyle style = self.traitCollection.userInterfaceStyle;
        return (style == UIUserInterfaceStyleDark) ? 2 : 1;
    }
    return 1;
}

%new
- (void)wchook_applyThemeStyleForRepeatButton:(UIButton *)button force:(BOOL)force {
    if (![button isKindOfClass:[UIButton class]]) {
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config) {
        return;
    }
    WCPLRepeatButtonAssetManager *assetManager = [WCPLRepeatButtonAssetManager sharedManager];
    if (config.repeatButtonCustomImageSchemaVersion != kWCPLRepeatButtonAssetSchemaVersionCurrent) {
        [assetManager migrateIfNeededForConfig:config];
    }

    NSInteger styleStamp = [self wchook_repeatButtonStyleStampForCurrentTrait];
    BOOL isDarkMode = NO;
    if (@available(iOS 13.0, *)) {
        isDarkMode = (self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();
    CGFloat screenScale = [UIScreen mainScreen].scale;
    BOOL useCustomImage = config.repeatButtonCustomImageEnable && config.repeatButtonCustomImageRelativePath.length > 0;
    NSInteger imageRevision = MAX((NSInteger)0, config.repeatButtonCustomImageRevision);

    NSString *appearanceToken = [NSString stringWithFormat:@"style:%ld|custom:%d|rev:%ld|size:%.0f|scale:%.0f",
                                 (long)styleStamp,
                                 useCustomImage ? 1 : 0,
                                 (long)imageRevision,
                                 buttonSize,
                                 screenScale];
    NSString *cachedToken = objc_getAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey);
    if (!force &&
        [cachedToken isKindOfClass:[NSString class]] &&
        [cachedToken isEqualToString:appearanceToken]) {
        return;
    }

    UIColor *backgroundColor = isDarkMode
        ? [UIColor colorWithWhite:0.16f alpha:0.94f]
        : [UIColor colorWithWhite:1.0f alpha:0.96f];
    UIColor *titleColor = isDarkMode
        ? [UIColor colorWithRed:0.37f green:0.88f blue:0.55f alpha:1.0f]
        : [UIColor colorWithRed:0.03f green:0.68f blue:0.36f alpha:1.0f];
    UIColor *borderColor = isDarkMode
        ? [UIColor colorWithWhite:1.0f alpha:0.20f]
        : [UIColor colorWithWhite:0.0f alpha:0.12f];
    UIColor *shadowColor = isDarkMode
        ? [UIColor colorWithWhite:0.0f alpha:1.0f]
        : [UIColor blackColor];

    @try {
        button.layer.shadowColor = shadowColor.CGColor;
        button.layer.shouldRasterize = YES;
        button.layer.rasterizationScale = screenScale;
        button.layer.masksToBounds = NO;

        UIImage *customImage = nil;
        if (useCustomImage) {
            customImage = [assetManager displayImageForConfig:config
                                                   buttonSize:buttonSize
                                                        scale:screenScale];
        }

        if ([customImage isKindOfClass:[UIImage class]]) {
            button.backgroundColor = [UIColor clearColor];
            button.layer.borderWidth = 0.5f;
            button.layer.borderColor = borderColor.CGColor;
            button.layer.shadowOpacity = 0.0f;
            button.layer.shadowOffset = CGSizeZero;
            button.layer.shadowRadius = 0.0f;
            [button setImage:nil forState:UIControlStateNormal];
            [button setImage:nil forState:UIControlStateHighlighted];
            button.imageEdgeInsets = UIEdgeInsetsZero;
            button.contentEdgeInsets = UIEdgeInsetsZero;
            [button setTitle:nil forState:UIControlStateNormal];
            [button setTitle:nil forState:UIControlStateHighlighted];
            [button setBackgroundImage:customImage forState:UIControlStateNormal];
            [button setBackgroundImage:customImage forState:UIControlStateHighlighted];
        } else {
            button.layer.borderWidth = 0.5f;
            button.layer.borderColor = borderColor.CGColor;
            button.layer.shadowOpacity = isDarkMode ? 0.28f : 0.10f;
            button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
            button.layer.shadowRadius = 2.5f;
            [button setBackgroundImage:nil forState:UIControlStateNormal];
            [button setBackgroundImage:nil forState:UIControlStateHighlighted];
            button.backgroundColor = backgroundColor;
            [button setTitleColor:titleColor forState:UIControlStateNormal];
            wcpl_applyRepeatButtonFlameIconStyle(button, buttonSize, titleColor);
        }

        wcpl_updateRepeatButtonVisualShape(button);

        objc_setAssociatedObject(button,
                                 kWCPLRepeatButtonStyleStampKey,
                                 @(styleStamp),
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if ([customImage isKindOfClass:[UIImage class]] || !useCustomImage) {
            objc_setAssociatedObject(button,
                                     kWCPLRepeatButtonAppearanceTokenKey,
                                     appearanceToken,
                                     OBJC_ASSOCIATION_COPY_NONATOMIC);
        } else {
            // 自定义图开启但资源未命中时，不缓存 token，允许后续重试加载。
            objc_setAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat button custom style failed: %@ - %@", exception.name ?: @"<nil>", exception.reason ?: @"<nil>");
        button.layer.borderWidth = 0.5f;
        button.layer.borderColor = borderColor.CGColor;
        button.layer.shadowOpacity = isDarkMode ? 0.28f : 0.10f;
        button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
        button.layer.shadowRadius = 2.5f;
        [button setBackgroundImage:nil forState:UIControlStateNormal];
        [button setBackgroundImage:nil forState:UIControlStateHighlighted];
        button.backgroundColor = backgroundColor;
        [button setTitleColor:titleColor forState:UIControlStateNormal];
        wcpl_applyRepeatButtonFlameIconStyle(button, buttonSize, titleColor);
        wcpl_updateRepeatButtonVisualShape(button);
        objc_setAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

%new
- (UIButton *)wchook_buildRepeatButton {
    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();

    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.exclusiveTouch = YES;
    button.adjustsImageWhenHighlighted = NO;
    button.clipsToBounds = NO;
    button.layer.cornerRadius = buttonSize * 0.5f;
    button.layer.borderWidth = 0.5f;
    button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
    button.layer.shadowRadius = 2.5f;
    button.layer.shouldRasterize = YES;
    button.layer.rasterizationScale = [UIScreen mainScreen].scale;
    [self wchook_applyThemeStyleForRepeatButton:button force:YES];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    return button;
}

%new
- (NSDictionary *)wchook_repeatAnchorContextForV2 {
    NSString *messageKey = objc_getAssociatedObject(self, kWCPLRepeatAnchorMessageKey);
    id wrap = objc_getAssociatedObject(self, kWCPLRepeatAnchorWrapKey);
    NSNumber *isSelfObj = objc_getAssociatedObject(self, kWCPLRepeatAnchorIsSelfKey);

    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0 || !wrap) {
        return nil;
    }

    BOOL isSelf = [isSelfObj isKindOfClass:[NSNumber class]] ? isSelfObj.boolValue : NO;
    return @{
        @"messageKey": messageKey,
        @"wrap": wrap,
        @"isSelf": @(isSelf),
    };
}

%new
- (UIButton *)wchook_repeatButtonForV2EnsureCreate:(BOOL)createIfNeeded {
    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    UIButton *keptButton = nil;
    if ([cachedButton isKindOfClass:[UIButton class]] &&
        cachedButton.tag == kWCPLRepeatButtonTag &&
        cachedButton.superview == self) {
        keptButton = cachedButton;
    }

    NSMutableArray<UIButton *> *directButtons = [NSMutableArray array];
    for (UIView *subview in self.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            UIButton *button = (UIButton *)subview;
            [directButtons addObject:button];
            if (!keptButton) {
                keptButton = button;
            }
        }
    }

    if (!keptButton && createIfNeeded) {
        keptButton = [self wchook_buildRepeatButton];
        if ([keptButton isKindOfClass:[UIButton class]]) {
            [self addSubview:keptButton];
        }
    }

    for (UIButton *button in directButtons) {
        if (button == keptButton) {
            continue;
        }
        [button removeFromSuperview];
    }

    if ([keptButton isKindOfClass:[UIButton class]] && keptButton.superview != self) {
        [keptButton removeFromSuperview];
        [self addSubview:keptButton];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, keptButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (![keptButton isKindOfClass:[UIButton class]]) {
        objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    } else if (directButtons.count > 1) {
        WCPLLogDebug(@"Repeat button dedupe(v2): class=%@ removed=%lu",
                     NSStringFromClass([self class]),
                     (unsigned long)(directButtons.count - 1));
    }

    return keptButton;
}

%new
- (void)wchook_bindRepeatButtonForV2:(UIButton *)button wrap:(id)wrap messageKey:(NSString *)messageKey {
    if (![button isKindOfClass:[UIButton class]] ||
        ![messageKey isKindOfClass:[NSString class]] ||
        messageKey.length == 0) {
        return;
    }

    NSString *previousMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
    if ([previousMessageKey isKindOfClass:[NSString class]] &&
        previousMessageKey.length > 0 &&
        ![previousMessageKey isEqualToString:messageKey]) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    wcpl_bindRepeatButtonTargetsToOwner(button, self);
    objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, button, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

%new
- (void)wchook_hideRepeatButtonByNFQPrinciple {
    CMessageWrap *cellWrap = wcpl_messageWrapForCellView(self);
    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    id cachedButtonWrapObj = [cachedButton isKindOfClass:[UIButton class]]
        ? objc_getAssociatedObject(cachedButton, kWCPLRepeatButtonWrapKey)
        : nil;
    CMessageWrap *cachedButtonWrap = [cachedButtonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)cachedButtonWrapObj : nil;

    NSMutableArray<UIButton *> *buttons = [NSMutableArray array];
    if ([cachedButton isKindOfClass:[UIButton class]]) {
        [buttons addObject:cachedButton];
    }

    for (UIView *subview in self.subviews) {
        if (![subview isKindOfClass:[UIButton class]] || subview.tag != kWCPLRepeatButtonTag) {
            continue;
        }
        UIButton *button = (UIButton *)subview;
        if (![buttons containsObject:button]) {
            [buttons addObject:button];
        }
    }

    BOOL mediaContext = wcpl_isMediaBubbleRepeatMessage(cellWrap) || wcpl_isMediaBubbleRepeatMessage(cachedButtonWrap);
    if (!mediaContext) {
        for (UIButton *button in buttons) {
            id buttonWrapObj = objc_getAssociatedObject(button, kWCPLRepeatButtonWrapKey);
            CMessageWrap *buttonWrap = [buttonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)buttonWrapObj : nil;
            if (wcpl_isMediaBubbleRepeatMessage(buttonWrap)) {
                mediaContext = YES;
                break;
            }
        }
    }

    if (mediaContext) {
        for (UIButton *button in buttons) {
            button.hidden = YES;
            button.alpha = 0.0f;
            button.userInteractionEnabled = NO;
        }
        return;
    }

    for (UIButton *button in buttons) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastTapTimeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [button removeFromSuperview];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%new
- (void)wchook_updateRepeatButtonByNFQPrinciple {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    if (!wcpl_isCellViewEligibleForRepeatButton(self)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap] || !wcpl_isMessageSettledForRepeat(msgWrap)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    NSString *messageKey = wcpl_repeatMessageKey(msgWrap);
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    if (msgWrap.m_uiMessageType == 1 &&
        !wcpl_isBottomMostRepeatOwnerForMessageKey(self, messageKey)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    UIButton *button = [self wchook_repeatButtonForV2EnsureCreate:YES];
    if (![button isKindOfClass:[UIButton class]]) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }
    [self wchook_applyThemeStyleForRepeatButton:button force:NO];

    [self wchook_bindRepeatButtonForV2:button wrap:msgWrap messageKey:messageKey];
    button.hidden = NO;
    button.alpha = 0.96f;
    button.userInteractionEnabled = YES;

    BOOL isSelf = wcpl_resolveIsSelfForRepeatCell(self, msgWrap, NULL);
    BOOL mediaMessage = wcpl_isMediaBubbleRepeatMessage(msgWrap);

    UIView *bubbleView = [self wchook_repeatDisplayAnchorViewByNFQPrinciple];
    if (![bubbleView isKindOfClass:[UIView class]]) {
        bubbleView = [self wchook_bubbleAnchorView];
    }
    if (![bubbleView isKindOfClass:[UIView class]] && mediaMessage) {
        bubbleView = self;
    }
    if (![bubbleView isKindOfClass:[UIView class]]) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    [self wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:isSelf];
    wcpl_updateRepeatButtonVisualShape(button);
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, CGRectGetHeight(button.bounds) * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];

    if (button.superview != self) {
        [button removeFromSuperview];
        [self addSubview:button];
    }
    [self bringSubviewToFront:button];
}

%new
- (void)wchook_clearRepeatAnchorAndButtonLocalOnly {
    wcpl_clearRepeatAnchorForCell(self);

    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    NSMutableArray<UIButton *> *localButtons = [NSMutableArray array];
    if ([cachedButton isKindOfClass:[UIButton class]] && cachedButton.superview == self) {
        [localButtons addObject:cachedButton];
    }

    for (UIView *subview in self.subviews) {
        if (![subview isKindOfClass:[UIButton class]] || subview.tag != kWCPLRepeatButtonTag) {
            continue;
        }
        UIButton *button = (UIButton *)subview;
        if (![localButtons containsObject:button]) {
            [localButtons addObject:button];
        }
    }

    for (UIButton *button in localButtons) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastTapTimeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [button removeFromSuperview];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%new
- (void)wchook_clearRepeatAnchorAndButtonForCurrentEngine {
    [self wchook_clearRepeatAnchorAndButtonLocalOnly];
}

%new
- (BOOL)wchook_reportRepeatAnchorIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    if (!wcpl_isCellViewEligibleForRepeatButton(self)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap] || !wcpl_isMessageSettledForRepeat(msgWrap)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    CMessageWrap *anchorWrapForButton = msgWrap;
    BOOL anchorFromQuoteProxy = NO;
    long long anchorQuoteReferSvrID = 0;
    if (msgWrap.m_uiMessageType == 49) {
        // 49 引用消息在 layout 高频阶段不再做 quoteTarget 解析，避免主线程抖动影响气泡首帧渲染。
        anchorWrapForButton = msgWrap;
        anchorFromQuoteProxy = NO;
        anchorQuoteReferSvrID = 0;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(anchorWrapForButton);
    if (repeatText.length == 0) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    NSString *messageKey = nil;
    if (anchorFromQuoteProxy && anchorQuoteReferSvrID > 0) {
        messageKey = [NSString stringWithFormat:@"m_%lld", anchorQuoteReferSvrID];
    }
    if (msgWrap.m_uiMessageType == 49 && !anchorFromQuoteProxy) {
        messageKey = wcpl_repeatMessageKey(msgWrap);
    }
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        messageKey = wcpl_repeatMessageKey(anchorWrapForButton);
    }
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    if (anchorWrapForButton.m_uiMessageType == 1 &&
        !wcpl_isBottomMostRepeatOwnerForMessageKey(self, messageKey)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    BOOL isSelf = wcpl_resolveIsSelfForRepeatCell(self, anchorWrapForButton, NULL);
    UIView *bubbleView = [self wchook_bubbleAnchorView];
    if (![bubbleView isKindOfClass:[UIView class]]) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    // 这里曾尝试根据气泡/菜单 rect 计算“方向有效性”以微调定位，
    // 但后续实现不再依赖该逻辑，保留会触发 CI 的 -Werror=unused-but-set-variable。
    // 为避免死代码长期积累，这里直接移除（不影响现有布局与锚点签名逻辑）。

    NSString *anchorSignature = wcpl_repeatAnchorSignatureForCell(self, messageKey, isSelf, bubbleView);
    if (![anchorSignature isKindOfClass:[NSString class]] || anchorSignature.length == 0) {
        anchorSignature = [NSString stringWithFormat:@"%@|%@|fallback", messageKey, isSelf ? @"self" : @"other"];
    }

    NSString *previousSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
    BOOL didChange = !([previousSignature isKindOfClass:[NSString class]] && [previousSignature isEqualToString:anchorSignature]);
    BOOL hasPreviousSignature = [previousSignature isKindOfClass:[NSString class]] && previousSignature.length > 0;

    if (didChange && hasPreviousSignature && anchorWrapForButton.m_uiMessageType == 1) {
        CGFloat cellHeight = wcpl_repeatAlignToPixel(CGRectGetHeight(self.bounds));
        WCPLLogInfo(@"Repeat anchor signature changed: type=%u cellH=%.2f old=%@ new=%@",
                    anchorWrapForButton.m_uiMessageType,
                    cellHeight,
                    previousSignature,
                    anchorSignature);
    }

    objc_setAssociatedObject(self, kWCPLRepeatAnchorMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorWrapKey, anchorWrapForButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorReportTimeKey, @(CACurrentMediaTime()), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorIsSelfKey, @(isSelf), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorSignatureKey, anchorSignature, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorQuoteProxyKey, @(anchorFromQuoteProxy), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorQuoteReferSvrIDKey, (anchorQuoteReferSvrID > 0 ? @(anchorQuoteReferSvrID) : nil), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    return didChange;
}

%new
- (void)wchook_updateRepeatButtonIfNeeded {
    [self wchook_updateRepeatButtonByNFQPrinciple];
}



%end
