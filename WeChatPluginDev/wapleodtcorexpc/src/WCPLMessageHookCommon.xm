#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLAppMessageHelpers.h"
#import "WCPLContactAdapter.h"
#import "WCPLContactLookup.h"
#import "WCPLHookGovernance.h"
#import "WCPLIconImageHelpers.h"
#import "WCPLLogger.h"
#import "WCPLMenuItemIconHelpers.h"
#import "WCPLObjcSafeCall.h"
#import "WCPLPerfClock.h"
#import "WCPLPureHelpers.h"
#import "WCHookMessageNavigator.h"
#import "RichTextView.h"
#import <dispatch/dispatch.h>
#import <objc/runtime.h>
#import <objc/message.h>

@interface TextMessageCellView (WCPLLocalReplace)
- (void)wcpl_applyLocalReplaceIfNeeded;
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender;
@end

@interface CommonMessageCellView (WCPLRepeatMenuBridge)
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap;
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap;
@end

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon);
static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint);
static void wcpl_messageHookLog(NSString *className,
                                NSString *selectorName,
                                NSString *stage,
                                NSString *decision,
                                WCPLHookOrigPolicy policy,
                                NSString *detail);

static NSString *const kWCPLHookFeatureMessage = @"message";

static uint64_t wcpl_message_perf_uptimeMillis(void) {
    return WCPLUptimeMillis();
}

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title icon:(UIImage *)icon target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title svgName:(id)svgName target:(id)target action:(SEL)action;
- (SEL)action;
- (void)setIconImage:(UIImage *)iconImage;
@property(retain, nonatomic) UIImage *iconImage;
@end

static void wcpl_messageHookLog(NSString *className,
                                NSString *selectorName,
                                NSString *stage,
                                NSString *decision,
                                WCPLHookOrigPolicy policy,
                                NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureMessage,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    return WCPLContactAdapterSafeUserName(obj);
}

static id wcpl_safeObjectIvar(id obj, const char *name) {
    return WCPLSafeObjectIvar(obj, name);
}

// ==================== 本地文本替换（仅显示） ====================
static const void *kWCPLLocalReplaceMapKey = &kWCPLLocalReplaceMapKey;
static const void *kWCPLLocalReplaceOriginKey = &kWCPLLocalReplaceOriginKey;
static const void *kWCPLLocalReplaceLayoutingKey = &kWCPLLocalReplaceLayoutingKey;

static UIImage *wcpl_clownMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M12 21C16.9706 21 21 16.9706 21 12C21 7.02944 16.9706 3 12 3C7.02944 3 3 7.02944 3 12C3 16.9706 7.02944 21 12 21Z' stroke='#FFFFFF' stroke-width='1.5'/>"
            "<path d='M8 8L9.5 10.5L8 13L6.5 10.5L8 8Z' fill='#FFFFFF'/>"
            "<path d='M16 8L17.5 10.5L16 13L14.5 10.5L16 8Z' fill='#FFFFFF'/>"
            "<circle cx='12' cy='14' r='1.5' fill='#FFFFFF'/>"
            "<path d='M7 16.5C9 18.5 15 18.5 17 16.5' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "</svg>";
        icon = WCPLIconImageFromSVGOrSystemSymbols(svg,
                                                   @[@"theatermasks", @"theatermasks.fill", @"face.smiling"],
                                                   16);
    });
    return icon;
}

// 火焰图标（用于长按面板的【复读】菜单）
static NSString *const kWCPLRepeatMenuFlameIconBase64 =
    @"iVBORw0KGgoAAAANSUhEUgAAAgAAAAIACAQAAABecRxxAAAABGdBTUEAALGPC/xhBQAAACBjSFJN"
    @"AAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAHdElN"
    @"RQfqAhsMMwflxhhNAABLbUlEQVR42u2953rjSM92u6icg+2epyd+539Y+52e1E5KVpa4fxSqWKQo"
    @"2W4HkRSWr5l2kkxRLBBAATdAURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRF"
    @"URRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRF"
    @"URRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFURRFUTJN"
    @"cO4DUHzC5Dde8v6Er/t1RYkonfsAlBPoelY+GDUAinLB6D0mIzzj/IdHf3L0SfStVZ5Hr5KMEAvk"
    @"wx9+XzQfoLwKDQGyR0iKQ6AoH4HeJnLKSW9f/QDlhVTOfQDKIaFZt2YZRys48H9BvnPKUwhQT0J5"
    @"BjUAmcItfZMFMP8FBJSIDEAovxG6rw6e5MhPFCWBGoCz49apf8e2y79EiTJlSmIIzANC9uzYsffy"
    @"BWmeAoQv2z5QLhU1ANkloESZKjVqVKlQct7Bji0bNqzZshNvID0cCNQPUE6hBiCrBASUqdGkTZsm"
    @"dfED9uzZsmLJEwtWrNmxZ+9MQEhatkBRUlEDcHasXx8jFAPQoMsVQ/q0qFEmYM+WNXOmjJkwY8GG"
    @"DVv2Xl4g+eTuSdFiISWGGoCsYu7/LQZ85Weu6dOgSsCOLUumjLjjgTFTlixYsWHLNsUEKMoJ1ACc"
    @"ndQVa+L/Gm2G/MRvfOWKFlVK7NiwYMojPXo8MmLGjCkLloSSETC5ggAgUIOgnEANQDZIJusCSlRp"
    @"0KHPDV/5lWvaVCmzY8OSGQO6DHjkkTEPPDAmYA9JHyBM9/K1VEgB1ABkg9jGnWz4VajRpEOfK665"
    @"5kYMgMkBLOjT45oxjzxwS4s6ZQIWrNjBiSqB5F9WD+GiUQOQRQJKVKjTpkufHl06tGlRoUzIjjp1"
    @"GjTpccUVQzrUqFICypRYs5cagUSVQHC8aEi5UNQAZA+T/6/SpE2fPj06tGhQo0IJ2FOlSp0GHZb0"
    @"6NKkSpUSAVUqsi+wkc3BiDDUngElgRqALGI8gBpNWrRp0aBKhTIlKQk2BUJVGrRp0qROhSoVqrRo"
    @"y77Ako0rEwJcajD976kncKGoAcgmtgOgJAXAofuwi7hEhTJVSpQpgRiFDg+MmTFhxpKV8wNCFxL4"
    @"QYE1CeFhPbFyGagByCKm1n/LhjVr1mzZS4bfEnUGlKRCsEKdJkMeeWTEA4/MmLNiJx9br3sg3jmg"
    @"d/8LRg1AFgml3HfOjBkLVmylxNcuXHv/hooYAxMQmH2BR265ZcyMpesaWLH0egfSUFNwgagByB4h"
    @"uN3+KVNmLNmwY09Zfh5fqiUqNKRuoMeQIY906TJmyoINa5YsmDJlzkKKhfCKhTQQuGDUAGQNsxzN"
    @"bv+SJ+Zy597H7tyRCTA1A6ZuoE6HHj369Bgw5YkFG5Y8MeWee0byGL/pOPl8ykWhBiALxDv4zHf2"
    @"4riv3PK3BF4AYCgRUKZClS0NmrTpMGAhPQKmcLhLnSoBAQtImBMfNQUXhRqAs3OkG9C0/W5lMy99"
    @"wcbVPkqyQVihSp2OSyAumfBIgzIltyNgPYrg4DA0ELgo1ABkhdBL8JmIfO8+wiP367hyoFEQKlOm"
    @"Sp02O7Zs2bNiSo8aZckhBMCSjd7pFTUA+eC09Kd/wzYzBcpU2BOK57CmSZMyJcqEIFUDy1htwLFn"
    @"VQqOGoCzc3SlBd7HKY88UgKKns7Ih5UJCalQls+QHQBTU7Bjwy7ePKyBwKWhBiAvPCcAbn8nMhb2"
    @"Lr6nJM6/KSQuE20CblyFQfrzqh9QcNQAZJd46e9L8O/l9mtTJxAQErpOglC8ihKLk4GALv/Cowbg"
    @"7KTuApgfPOf8H5I0GLZoqESNNoEsdpMbsIHA9mgggAYCRUcNQJaxHsDrfAD/8caA2KkCZWdUSl4g"
    @"sDwZCGgYUGjUAGSXty88eye3i7/kzRwKXCBQZi6BwD7FBOjyLzRqALJLFAJEewGvJ2oBNjIjLTgI"
    @"BPYSCNhHaCBwMagByDJREjBeChS+Yi0GsvjN/b52NBAwJcd6x78w1ABkl6gecOcqAn8Ef1egRJUS"
    @"e/bOJOzFGMzkr6kBuCjUAGQP/06/FzGPqB8gcJn91+4ORIGA3REwuwDEAoG4hJi6/QVHDUB2Mct/"
    @"w9LN/qmK/NfribcP15zzbycQmyKhkCXrlLkCoZqBoqIGIKuEUqy7YCZTAJtUqSSq/F6O3zgUUAHa"
    @"EmTYQMCWCiECZBBtJGpgUFDUAGQXIwv2xIgHBvRpU6Mqu/pvwSzqigQCxgjYYSLGDGwPupM9RWH1"
    @"BoqEGoDssmfLkhkj7ugzpEeLHZU33I39QKAUCwRCMSs2ELAmweBvDKovUCjUAGSTQHr31syZMGLE"
    @"lAVr6eZ7y/P6gmAmHWj6AwNMl6BJBO5S9gM0ECggagCyS6QMuJBBH7t33KYzHQIBNTouENiyY8WK"
    @"LevY3wqSD9RAoCioAbg8Ai8ZCDU3bwg2bFgyFyOASwWmP14pAGoAsosdENagSZOGbAK+x603EgK3"
    @"msJ79mxYMGfMg0iRR8s/XhOgy79AqAHIJqEo/dZo0WPAgC5NapTf2feOSoNabJgzYUifR+pU2SXv"
    @"9eFB57IGAnlHDUB2MQM/Ogy54ZoBHTEA77Pq4oFAlZAtXQZcccWIKSspQtaBooVGDUB2KVGhTps+"
    @"V1zRp0VdBoS/phnoOEGs6LdElaaYgBFTluxljJhtIdZAoICoATg7R1ZSIO27Tbr06dGhQZVSQgL0"
    @"bfgmwBqAa8Y8sWAtHQJboj4C80miGkDDgDyjBiB7RM55SQZ+NWlSd0nA97z3Bq7YtyyzBZfM2bBl"
    @"L3sDy5MGRwOBnKMG4Owc1QQ0XoAZ9VGRxW81At/zthuZmxotBqycPMjeSYnvNRAoJmoAsotVAypR"
    @"pkTpnbYAj1OiQtMl/mxfgGkbTs4RCjyhIHewSv5QA5AVohUUZedL3oef/X/P1RZpCwQuxRj1Bdg5"
    @"QguQlKCu9EKhBuDshBDF4pbAGYBIAeCj3O1INKxEQF3u/UYixIiGmG6B44GAklvUAGSB4OArM9+v"
    @"Rp0aNSoJD+D9/37kdQTU3RKPFALMRIFNclRJGKhYSL5RA5BFzPKv06JDl5aUAX+sCbD/BiI6Eu0O"
    @"mO+HBCxYye+F3iM1EZhj1ABkEVuc22VA3xUB/5gY2OuISoObRM6/df+RwCBMPiQ6cCVfqAHIGiEl"
    @"qQHsMOSaG4Z0qDsxsI/HeAEN6TtIThVceDsCgfdvqL5AHlEDkEUCrwvAGICG5AE+MgsfFSRY+fCo"
    @"6LjstAPN7/g9AnrbzzFqAM7KkVtmyQsBBnRpfUAf4HOHZQuRrWj4lh1bVmzYshG/IL74QxULyR9q"
    @"ALKE3ZALXCNQlw5t6lQov2sXwEuOJaAKLhAwUwOWrNiwEaOgKz33qAHIIqb6r0qNOnVqsvyj/fqP"
    @"/dvR4JESVcogSsErFkyYsWD5Zm1CJSOoATgrR2R2fe3eslcH6A/t/NiDio6iRI0mO5ZMGXPLPWOX"
    @"kPQyEuoM5BM1AFkkqgIsH5QBfy6mKLjOnh5DRlxxx5gZGzerUIyAqQcK1C/IGWoAskS8C8D2/31U"
    @"F8ApAm9bryR1AV0GDLliwpytG1eqSz7XqAE4KwlxDTuxtywfH98BeBy/OcmWBvW45pEZC5Eo37BL"
    @"SIbrBKGcoQYgW5iovyIiIO+pBPzWYzKFSU/M2bCRJqEFGzYk0xiBFgXlBzUA2cJk3hu06dKl45SA"
    @"z2MCoiYhoxfUZ8mKHRv2MkHQzBAKZLJQhC7/nKAGIDtY999IgQ9lGuBndQEcPyowJqDOniu27Fiz"
    @"ZcOSjdQEhKceqGQZNQDZIuoC+MIXrujRTBTlnoMAKFNz9X87tqxZsGLNRgqDlVyiBiBLBHKnNVLg"
    @"1wylCvB824C+UkCZEiF79qxY8MSICU8s2bkZQqoXlDvUAJyJo2LgkRR43+UASmeMqX2NYqQoaMiM"
    @"EQMpCiodPkTJC2oAzkfAoaxGSZSAmrRo0ZRRIJ/bBXDsOE2bcJ29VAQMGTBhLnOEvaPToqD8oAbg"
    @"fBxbIKYCsErN2wS0nfnnxg4Q6cgQsSlztuxiRUEaCOQINQCfzotWsS8F/vl1gEn8v2vqAtv0uWHC"
    @"XHIAe7Zs04qC1BZkGzUA58df4FnpATh+rHZk6RVzUQcw4ckiIRgaZsZrUU6gBuDTSWho+GJa0SwA"
    @"v/vv8GHnOWx/YFmDviz/LTt2bNmLJ6DkCjUAWcBGzVYHoCqjwLKGTVRWaBBK7G+MgJEJ2R4WBWk5"
    @"ULZRA3AmEsFxIAo8DVq0adPyhoFmi2RR0JYtS2YsWLBWDyBvqAH4dFKC4sBtsbXonUkH8HniRUFG"
    @"JGzHnCkPdN3w8oMHKVlGDcAn4pb+4d0/KgG+4Se+cPVJSsCvI56rqNFkS8+bXJCV41ReTPbizOJz"
    @"fPlf8T9+5Td+4Sf6rgsgmwQyuqwlJUu1jIYsykmye4EVkOBwX8+qAFdp0ueGr/zKr3zlmu6ZuwCO"
    @"vYS4gEmZClX5KKf5AKGKBmUaNQDnJ5DSmqF3/x/Qpu52ArK0guKFSSUqVKnTcOrFyeqFgEDNQHZR"
    @"A3BurARIj2u+8gu/8D+u6LoMQLY8gOSRl93ORYc2Dc0E5A01AJ9C6H24bxms2k6HAdd84Zo+beqx"
    @"nHpWzUA0wMSkAq18ia8nCBAEmX0Jl47uAnwu8bLfMLaEhlwxpE9bttSyjzFeLfpcM2LMlCUrtioQ"
    @"kh/UAHwWye280Nv9b9NjwFD2/xteC7B5ZFax8iUDbpgyYcwTC9YyOEzJAXm4z+Qa5/an5cCi+3/f"
    @"aQDWE1F0dpd/FL50GTjvxSoYxM9CEKo8QCZRA3BO7P1/wBd+4oYBnfQFlEHs9MCofnHoNIyynr5U"
    @"HGoAzofZRW/Q5UoMQD9RAJzVJRTNKIxkzE0J84AuTaoJL0Y7gjKLGoAPJvA+BL+QJh4AtN0UgKz7"
    @"y1G7slUx7NA/HQZoNUAW0STgpxAe3v/i984hA3qeBGj2TUDydRg/ZspU9gI2uheQB9QD+ByS9f92"
    @"4KbV1htIArB6xjlAP/7aKm4v4EZmGeQjj6GoB/BxeLfwwH3LOM1WVafNgCuuuaJPSxzn5GOyTFwj"
    @"qH3QGZjwYvLwki4N9QA+kqSwV7T87azd/3nFv1ls/nnZqyxRoUaLDh3asg+QP0/mIlEP4CMxW2X+"
    @"18YE2N5/v/knH/n/QwLRCLJNQQ3qVKlQ0ptLHlAD8AGczN9Zh7nrmn//xxUdKQAKnnt4hogfaynW"
    @"GlxJ280IvUfkx8IVG7XSH0Vw5LslKZ/1xT+GOSoASn+VtjOwLjONGinlQHkxbBeFGoCPIjzyVRQA"
    @"fOEr/+Mmx8s/InBlTW26dKWhKYvKxkoMfYPelVipS3oPbNT9d8WV5P9rseWfz+RZVA8wYODVNKbI"
    @"hObzBRYTzQF8DoFExBXZ/e9zxZVU/5nd/7w7yIFMDBryhSkTKQfaHZQD5afE6SJQD+CjiSvo1UT6"
    @"wxT/dGXLLPB+N683RytsNuCaGydrovpAGUcNwLuSUvlvCLHOf5chN3zhmgEdGrElkk/fOBTDFSkb"
    @"DV1l42FmI9TW4CyhBuADCAmDMO7qmtLfFn1u+NlT/j0yTiOHRK3BXWkN9k1AEV5hIdEcwEeQvNxL"
    @"UvvXkb3/qPinmsvin+RrDWWJx03AI2MWbNMmBipZQQ3AOxGb+hMm3Pqo7/9//Mrv/Obu/5WcFf+k"
    @"E00MMq3BJsyZMOGJFWt2h69QJQKygRqAj8WUyVZp0OeG//E7/4/f+JWf6NOR5t/iYLYCTZfDhClj"
    @"pixYsGGXcxNXWIp0+Z2Vo7vbUXb8J7n7/8wX+rQPdv/zjkl0mlyH0TiOahxefr6UT0U9gPclTfbD"
    @"Vv7/zK/8xs/8xNAt/2OPyx9+EBDVAzYlyZn/11dQ1AB8LNH9/wu/8Bu/8D+R/ixTpnihsJU6MdOC"
    @"WjIwrBj7HIVEDcA7cSTEDZxLfM0NN1zTc0WyoTywCIsjSn0GlGRiYI0aNSpuI9A/RUEY2ocp50Rz"
    @"AG8mJDSNrodDMSOHuC9zf+zeeJGvfNsZWKNO3akDxKVRQg0LsoEagPcldpdztXFG9TeqjisXKvkX"
    @"vV77r/EAGrQ8hSAVCMkk+qa8CVfhkj73x+6Km+LYjrTI5r3093lsZ2CHHj06KZMClIygOYD3IvD+"
    @"bz6z+X9T+2/UcquxqX9FpeR0gs3Q0JkrB9KZgRlDDcBbObacbf7fFAB94cqbmZOsFiwSduJxky5X"
    @"jJkwYswTFZ0UkEU0BPhBEkM//YZe5DtG+b/LkCuu6HmV/0X3AAJRCe4dHXmqZAQ1AO/BofB3lP+P"
    @"xmb6nX9FNQHJSQFWHqxSsKLnwqAhwI8THEn9meVvu+KM7Jc/Nbf4RBKhVia87G0DFj8HkiPUALya"
    @"0P8krnkbSD18yUljXIvyT1Ihr5hmIFkOVKZCmTIlLQfOKmoAfoS0e5i9u5l7n5H++MrPfM3R2O/3"
    @"PUfGCJTSJZKUbKAG4D2xzn+TPl/4ym/8xs/c0KMh7n9Rc//+OQjdZ/acFP015xg1AK/gqPMfqeJY"
    @"aezrE8o/l0LofRQ37Zlz1AC8jlPOf0CFKk3R/fud3/mDX7imT+sC8v/PcWnmLyeoAXgdx5Zv5Pz3"
    @"+MJXUf75hS/0aIvyT1C45t/TqPOfA9QAvIjYuk/O+/Uz/z1x/n8X3d8ezVj673KWP+r45wE1AC/l"
    @"2K5/5Py3GHDNz/zB7/zOL9wwpC3NsPHEmKJkBDUAL+Ulzv+NOP+/ivPfpBYr/bm85X95rzhnqAF4"
    @"hpPOP4QJ5/83fudX2fqLlr86wkpGUQPwPMedf9P4WqMZc/5/5ZqBc/7jv68omUINwPOER75bOuL8"
    @"3zjdP5v518WvZBQ1AEd5xvmPJL/Snf/LaPxVco4agFOkL+Eo8+87/3/wW8z5L+viF9T/yTBqAE5x"
    @"2vmv0aYrzv8f/JZw/i16+ashzDBqAFJ4ofPflJr/32Tg1w19Ggnn/5KX/wteuyZIzo0agHRe5vzf"
    @"8DXh/Ncoq/Of4FRBsIqDnBk1AOmEB19HHX++8/8bf7iW36Y6/zFC92/47O8oZ0INQIyjzn/0vbjz"
    @"/4eb9tt0wpfq/Ef4RiBlsetJOjdqAA4Jjjr/Ru++oc7/iwliH0rmUAMQIwB313L/+HIfNZpu39/c"
    @"/S+74+8UkTZgyekCQszN0iTguVEDILzY+e9xLXIfxvkfOOdfE1pJSm5MaJWqm4jonyctljozagB8"
    @"Xuv839B3zj/a8psgcJ0SLdo0qLFlq8PBsoUaAOFZ57/6jPOvqb84Rh/ZzEbq06PDnA0b9I6fKdQA"
    @"vNT5b8Wc/1+4Uef/GQIq1GU6wpgxT6xYsz+5Lah8MmoADHYJh4lU3qHz///4NcX5166/OEYmzUxH"
    @"vuKGCY+MmbPQ3YBsceEGIIx/Eo34POb8m46/a3qu6PfQcChgKybrtOlxxaPXJaFZgAxx4QYgRpDy"
    @"naTz/7s4/8mWH+UQ2y7dcSNCL3E6QsZRA/Bc5r8pQ74i57+nmf9nsP6UEUut06QpI0IjhUTNm2SC"
    @"izUAL3b+u57Qt838Vz3nXxd/En9EaECZihsRqmcqc1ysAYiRrOEz965KrOzHd/4r6vy/CFsC7A8J"
    @"VTLFJRuAY06oTV+p8/8eBOIL6JnKJBdoAF404rNCky5X6vx/LgcW+fkz/GwZh3KKCzQAvHTE5xW/"
    @"8Ae/qfP/JkLv/6/lJetZk4lv4jINwDGSU37izn+dkuf8683meYwKwF6q/7QGMINclAF4kfPvZ/5/"
    @"izn/JXX+X4RfGhWyZycf+1PL/xm1kOOD2ezvhdGv6Zvzci7KAPAS579F/9kpP8pLMIt/w5olS9Zs"
    @"Y0bg1JI+LKt++ZrWkOBVXJoBeO2Iz8j51yk/LyeQ0eA7Nqx4YsqUJ1ZsT3sB74Iu/1dxIQbgpNC3"
    @"aVzxR3z+GpvyU9URnz9ASMiONU9MGDFiyoI1u2NnMYgeF//36NMnHuyFdGHiR8pxLsQAcGrEZ+T8"
    @"Pz/iU3k5IVuWzHjgjjsemb3UBwh9paDXr2ANAl7B5RiAH3H+W+r8/yABsGfLkimP3HHPiBmr4x5A"
    @"6D8yLhlW8oqJ7C+H3v+VN1B4A/DMlJ8w4fwnR3yq8/+jhIRsWbNgyphxLARIuUcn9EKtwQ2cpKgt"
    @"JA6BvWwu7tmT5inovsCLKbwB4JTzj1OtO+b8q9D3j7Nnz5YVC56Ys2QtuwCpqzEkxdSWKFOhRpUK"
    @"FTEBJrewY8OGDTt2z1QXqAE/ySUYgNMjPo85/36/v95AfoyQHVs2rFnLYt2n/E46Voa9QYsWDWpi"
    @"AkL24lksmLNizS71WV6YTLx0CmwAXjji85jzX9Z7xxuxdYA7drEaAM8jC8ITp9i0ZHUZMKTr+jD2"
    @"7CSwGFFhKh5BVMwVPdoeBRoIHKfABoCXjvg0zr8/5Ued/7cTep/Zj9dg1Zj6fOUrV/SoUyGQ1OKM"
    @"B26pU6FEcGp70T2bvpupFNsAnHb+oxGfv/OHKP32DsS+9LbxYwTO0JZEDiRlMtDJxxtR0R43/MpX"
    @"rqQiY8+GJWPunE9QYsFaUoJ2XyC5a6PL/wiFNAAvdP6jEZ+/y4TfvpP6VK/xPQhkMlBVfCqzoerd"
    @"jcPAhAGpjcD2XerzhZ/5QpsaJfEAxnRchUaZMgu2bNgSevsC9nnc0+tbekghDQAvdf51xOdHYkeD"
    @"GE3ABnM2r9AEjgaLdOhzzQ1dapTZs2NFl5YzLA2aTFmyYsmW7Yl9AQ0EDiiqAQgPvo46/nzn3075"
    @"iVJ/6vy/D/ZMN50q8Fzu0cd+P/noEhWq1GjQpElbzHPIjjpVKvIbFVp0GfHEjBkL2RcIU9KCGgik"
    @"UDAD8OIRn93YkK8v9N2UH/UU34uSzAUYcMXImwyUKAZ2FQC+XnDgagDq1KlTk48yIXsRGYUSVer0"
    @"eOCBMY88MGEqugPxxa6BwBEKZgCA14/4VOf//fEnAw35woQRExYs2b7g0SVXoNWmTYuG3PONf1Zy"
    @"GsMVGrQZMuaBB25pcUuZgAVrthwb16KBgEfBDMCzIz5rz4z49J5GeRMBeB7AI33ajF84GcjuAHTo"
    @"0qNDQ9J90cI1wi2B1HHMuOKejhQL2T6BfTIQkLdVl79HYQzAi51/f8Tnz3zREZ8fRpTE69F78WSg"
    @"0Bsq1ueaKzeFMfDaf0x+oUSNOh0WdOnSpEIFnAHYJgOB8GAbUi19YQwA8HrnPzniM3qE8nbsJmCd"
    @"hjjxcS/reDqwTE0Gsv3ET1zJ4i7FBMbtNmGVJm2atKhLx4DtH1yClw60qJGPURgD8KzzX33G+dfc"
    @"0PtiDW+yDuC5M2wf06TH0HkA9ZgqQzR6zM4eKlGhJPf+vfgKgXQNxgOBIFAT4FEAA/BC578Vc/6N"
    @"0Lc6/x+LnQpUpiznOXjm96P4v0WXAQP6dF3wkOz/DzBlQBVpGbb7CSZfYAzARrWIT1EAAwC8xvm3"
    @"Qt9x518lPz6O13QC2OXfps+QIQO64tyXDt5j36AYQxM6n8AEAiGwZCVHIUcTBrh0gFIAA/Aq5z+a"
    @"8tNwiaXoEcr74ouC7w4rAA5+275fDTr0Gcjyj8axGJMeSYr4z1aiSkueB/bsQNQHQtaHfzkuOnS5"
    @"5NwAnHT/o2ry9BGfftWf8t7YeHzn9AC2LxgNYvL/HQbc8IVr+rRcmGZ+jvdZfGMwoC7hnM0BmGqE"
    @"ENgcpHh9Q3LB5NwAHCGq+dcRn+fDyIEYRaAnKc45PRfAz9b8xE+JeYzp+R3zXNZA2EDAfG48CrvQ"
    @"jXBImDABF07ODYCvEyn/pDv/OuLzswmBHWvmogk4Y8Hmmb59swHYoMOQK65cc3bw7F+KqgNMIGC6"
    @"AvdsRTxsxyY1AAkvffsn5wYADtTkZLMn5vzriM9zYKU7rCqwGQ1yGAREO/tGoalNjwFD+nTdNu0p"
    @"/V/flBuvz1YMGAOwYskm0YVwqev9gAIYgARBzPn/os7/WTCy4BuWTGNzAXZHC4EDae1pS/qv7yUA"
    @"n68dCGPPYncMdqxZM2PGkuUJ7+OCg4HcGoAT75g6/1nATgaap0wGCmJ+t/lOVP/f54qhuP+VF3Zo"
    @"WB/QPK/x/nYyluyOe8ZUWXnvfOj8DnnUpQYCuTUA4BJD/ntnu8jtlJ9k5l+d/8/DyHcu3WzApeQA"
    @"0leZzf8P+eLy/z+2UxMQUGVPyJohY67oy1iSvfz9uHjoxd79Id8G4BBT/lGNCX3/xi98cSM+I+f/"
    @"8oz952J34zes3HTg49uAUc7mysv/+wnA59+vwC1u04lYo0WHAVdcMeGJtYwT0cpAjxwagDD5SdKR"
    @"tDpyv/Abv/LVOf8ldf4/kcjF3rtCoPSlZxatMQAdBgxdAPB87+Dh34woifTLkGumPLEWg2RUA13t"
    @"52VfCjk0ABx323wl2Z/5Ve7+OuLzM4lab8LYCK9o+cffvYBQ2n9en/8/hZEUadPnhpkbILJnISbA"
    @"O2CcNOnlkU8DkI5VoWvR44b/8TNfpeZfR3x+NqEs/V1Crvvw92z6r36w/Csv6B08JEowmqLiPitW"
    @"MpjE+BoLQklGajCYLwNwMDrSfhUFAeZN7zLgmmuZKFOTe/+F2vhPJMqtW+d/H5sIlE60azN0+f96"
    @"bPm/dolGJqBGi4E4/zuQhb+Xz4LYQ5xnckkWIVcG4Ai28NfKfXfpy6UUdZLp4v9MzBbghhULlqzY"
    @"eGbgkMBJh33hJ24Y0Kb+5k4N0ypck76AkusLMN0CCzZsSPYEJaYWXAJFMABg3f86LXqS9+3TOcgj"
    @"a8/fRxLtsYdsWTFnyoSJ2wC0JiC5wEoi1D7gmhvR/6lSdj9/7XvmBwG2jiDqCAAkH2GCgn3i+S9q"
    @"+efMAKQoO0UbP1HO94YbrmQbqXT0CZT3JVrce/ZSAPTIPQ+MmbNK1OEl8/XGB+iK2X6JduAp/N2e"
    @"CkhfwJ6QLVu2rNiwPS4VckmpgVwZAMOBlkOU/BtI9t/m/rXw57OIVBX2bNnwxIhb/uFv/uWeCctY"
    @"J6DBJmWj+UEdOp546I/m/6Pntt0BDTEogWwELliyZiMtQxdNDg1Agmj5mxlyv3mTfqpeHfllGPTz"
    @"YRfsng1zWf7f+MY/3DGVNqD4FmDkqNsRIA3q1GT5B96z/vjxmM/K0g68Z82CJ8ZMmbNgqwYgJwYg"
    @"GijvfSvShjXL/4avsvf/E0MZJfmaebTK2wik6GfFE4/8x998429uGfGUMsDb78u3Q8CqVKh4c4TN"
    @"T99yPMnugCUzRgy4p0GVtXv2+OSACyInBkAIEp/bkk8z6PMX/pDKf1NJXnljJKm8HpP+m3DPP3zj"
    @"r5QAIFr2pnC7ItP/WrRoUHv3d80UGpmdhpAlA64Y0mfMnG1SpsyEl5dUFJQvA+ATypgoU/l3zc/e"
    @"mG9TSFryin/VEHwGJrduPIA7vnPLo3QBhgf6/LZw287/7dNJyH+9nSC2zWeLjftcccXUGYCL7g7I"
    @"iQE44sn7lf8/S+X/DX0R/Ew+XPl4QkmyzRgzYsJMtgDjGzg2vi971frXDOkk9P/fTtxntKnia8aS"
    @"A9ix845Pjiz0BGaKfunkxAAcwY6fvOIrvzm1/7ZEktr48/mE7NlKqu2JuWy4HU7qjcq2htzwC7/y"
    @"Cz9Jy/bHJG5twXGHIf9jyUaEQkMWrBNFQeb3L8IryKMBiO4gVkL6ii/8xBfZ/fdz/1r687nYHoAt"
    @"WzZSgX/4OyW5G7fp8UXk2n/hC31ab64BOCTeHWBaxdds2ciRhlKwfJFk3gCk5P/t15GEpInqBl4N"
    @"md79z0W8DSh6H+IiHNb5v+Yrv/M7v/I/ruhIDsA8z/self27NTpimEwxkNELTCkKuoxLJ/MGQAhS"
    @"vrKV/6aDvC+V/9VE2afy+YRE47mTTcDmPmx2br7wswxqtTs373//jzDdAXVKckymJvBJuhWiI70o"
    @"rzHzBiD1dmCdyLobIdWn7abIJx+snAM7pDv6ynf+W/QkcfuH7Nx0P3Dnxq8LLLt6haWUK0+YsZBu"
    @"wcQLKP4llHkDcJSSk5C64Zq+ZJCTlQLKubCpvvj3rPPfl43bP/hNdm6aCQWgj8oDmB7BJjsWTF3T"
    @"2JztQalSAIRFNwP5MgB++q8iAyRM+m/oRkgX973KC3Zsd8l9hvt/5Yjz36YqDcAfteLiXkDUNj5k"
    @"wEQMwJ6L2wvIvAE4cv6jEZJXsoNsA4BIlEI5B6a+z4wEj5di27bfLjeS+f+Nr1zTpemCNxM4fNS7"
    @"508PqLgAcsCIGWvRLL6wVGCGDcCJ/H9J7iQdeQMjDZnYA5VPJ5Dmnqp8RLIe/ty/X/iNP/idn7kW"
    @"578CHxD7J48tujasBznghjFTpk64xHIhqcAMGwAhSPk6vvz7tGX7T5V/zk1knNt0aDOXvQArz2Vn"
    @"NcWd/8h3+5xlZ6cQmRByylQqA9feXsCFkGEDcLT81xaR+Pn/6qsU5JWPIoqvBwyYsCQkYEdAhSZd"
    @"0Wuwzn9P3jn4aOc/Oj7bIRhIEDngmgf6Mrvo4vYCMmwAYviXRklcySu+cBOL/5XzYoXZzJ11zoo9"
    @"FZ7YAjU6DKVk+3d+5oaBdP8lpzt9NHaChK1FtErE4+N7Aec+sR9HXgyAJZn/v2HgNgCLa6bzg0mu"
    @"dblmwY6QKm2mbAioSfT/K7/yi8i1Vyl9svNvsLOITR2pMQEPzgD4ewE2pVxYE5BhAxCm3xFM9GY8"
    @"gCuvgyzQ/P+ZMXdWU541ZAOUqNOLGYCv/MxPXNMVry349Oo739+I9pKGDBkf3wsobiCQYQNwQCQg"
    @"YQuABzLzT/P/58fOajCFPntCqbsfuxCgzUAEW/tu8IflHGsrkHlEXa64YcIkZS+g8GTZAMR6tOU7"
    @"UQnHQPL/Dc3/Z4CkDi8ixtnjiRU7kMCtR8/JtZ/D+U8edTSRYMqIETOeKF9SZ2AmDcCRtRy4N8wM"
    @"/tD8f5aIBq+V5KoySba1zOIrU6VOk4Y0bPHpzn8cq0hcdXmAngyQTzme4l5YmTQAR4j6ua/5iRuG"
    @"LpJUskB8IIcdzmnz6kb7t+JkP6NHnfOIrU/ZoeN5JsVd7wfkyQDYNo4+13xxI6Qql/R2ZRxf59f4"
    @"a5HinqkRLLkOATjf3T/yVgKRJG/QpEldREkv6JaSSQNwsgSoTosufZn6a9t/NAOQFaJ3oiQz+aIU"
    @"erRLc+60enwvoEyFqhMmNyYqdkUZlcAi3mkyaQCOEvUAdGi7wZ+6/LNEEFvw0XI/tOrZWE+2d6FO"
    @"QzIUNdExLPDuf0SenB1rqe1bFcVrtklYyQL23fDHe/ufZe3dCsQAtOjQpZNILMP5/ZUPJJMeQGoJ"
    @"UJqrpoO/sknwbEtNlt6vqLq0z4BHJqxkktEFlANl0gAcYDaX7EaSmSBTReU/skue3peoevGGCWOm"
    @"LGWawQWQzRAgLV60c126dGi5QlJFeSuBbFj2ueaGK7o0YtLyhSZjHsCzJUA9hgwu6y1SPpBkOVCP"
    @"bqxOMUYRL7dsegBJfDUZrQBQ3hcrYtIQEZOoHOgCrq98GACrAWinyPVpJzRkFeW1+LsVRq+wLtuA"
    @"1US1YoHJWAhwZApAvA2oqyVAyruQVg5Uo0ZNNgIvoBwoD1YuiDlpbXHSNAmovCf+LlNTtIriYUAh"
    @"bzV5MABGZtqUANXFRSvHasrVEChvI3BCoW269DyZ2YKTsRcYEgYHPpa5/1v3rOqWv/2pLn/l7UQD"
    @"S82wEDNq7vDqKtjVljEDIETOVpSgadKmRZN6wgAoyntgBEy6DLmRQfMN0S0oNNl/gTb679Cl60aA"
    @"6vJX3g+rV2AmF1xx7TyAEgVvCcrYLkCKw2VKgMwQsCt6B0MkFeVtJKcFmXKglisHSv31olyAWTMA"
    @"cYxlrogK0BdRAdISIOX9MbeaKg1atGlSpyJbgYUm2wbAH+M4EA+gFROUVJS3YWoB7PRiUwtQOVUI"
    @"VKyLLg85AKva1pMSoKgLoNDRmfLp2JRzXGei0GTdAARiles0aEkj8AXsziqfSlyuJJDx5iXnFxSY"
    @"rIcAgLwhvmumMiDKx2JNQMp+U7GSgNm/lxobXPLeEv8nivK++MpTVcqy4+QXBBcqMZhdA+DPA/I/"
    @"dOErH0dJks4tOnREdrbQIWf2X1qY+FCUjyPwUs59Vw1Q4FtOZgzAs6u7wG+CkhkCGWg24JprN3q+"
    @"wJWnmTEAR4lcf0X5WCJ94KHMMe5KS1Bht5wzYwCOrnJ1/pXPIRKeaUlPYN8bPlNQCvzSFOUV2N29"
    @"slSe2tazarHVAbNbBxAfKBkfKqkoH0MAblBY4xJazzNjAML0NJ+tyioX/Y1QzortCPDLgSsH2sAF"
    @"bA3OWghwKAVScUJglfTKLEV5VwIpQC+5663A11zWDICPzclGRRk6DET5OOKlZ2mfF5DMhAAHBECF"
    @"Gi16DBjQpXUwtVVRPgJ/56ngO1BZ9QCsFEi0J2umAWkmQFHekawaAHNskUzjNUM6RS/KUDJF5PwX"
    @"+JaTXQMQuLpsGwI0NQRQlPcluwbAzmqxScBmrCpbfQBFeQeyaAD8DKwRBa9Tu6SJrYryWWR3F8Cv"
    @"Aywf7MqqGVCUdyCLHkCcgJIYAt8zUBTlHci6AdClrigfSJYNQOj+K3gxhqKciywbAHX5FeWDybIB"
    @"sOjyV5QPIg8GQJ1/Rfkg8mAAFEX5IPJgADQEUJQPIg8GQEMARfkgsmwAwpTPFEV5R7JsAPyZrYqi"
    @"fABZNgCgRkBRPpSsG4D0uYAaEijKu5BlA2AW/Z6dfMTLgdUIKMqbyaIB8O/0O3Zs2bBmy469J9Wo"
    @"KMqbyaIBsITs2bJizownFqzYsnMjnBRFeTPZNQDG+d+wYMqYCVOWbNjrvV9R3o/sGgDYs2XJjBH3"
    @"3DPmiRVbmRmoKMo7kFUDYMS/NyyZ8sAdtzwyY8VWfQDl07iAKy27moAhITtWPDHmkRET5qxdDkBR"
    @"Pp4L8DSz6gGA2QPYsOSJKVOeNAegfCrRtnOBr7msGYDI5oYuDbhiyVL2ANQAKMo7kpkQIIAQwqTT"
    @"ZYzAli17XfzKJxG4j8KL0GfGAKRiawHth0qDvh7/jBX4Qn4H0kvNC37FZdcABHLqLyAOe3fCF3xf"
    @"jcExkjedQl97mTEAR8+x744pL+fU+Qr1bCawN5vA5Z627FzxeYHJjAE4SaHfgnfmZR6TFlSnE0oB"
    @"+poVS+lAKfRuQPYNgG3+KeDJf1fCg6/8/4BYSis+Y1kNgQ05Q/YHW8+Frj3JjAE4OvXb5mI1EHgJ"
    @"yW3UKHVqB62W8Dd/tbA6TsiWNQumjFzx2bbIt5/MGIAD4jnZaESYckgyf22qKLds2Lji6YAyFapU"
    @"KVOOmVINB5AzsGfPjhUzHrnjjgemLNmyP/ehfRzZNQAWu/TjeVnzE71ok45/CHIZmyh2wYoNewJK"
    @"VGnQpEGdKmU3aj2IPdOln9GQLSueGHHPHY/MxACEbleqYGTfAPjFQKYW0L4dwcU7sPFFa2PYLVs2"
    @"LHhiInHsDqjQpE2PLm0aVKlQoQQJT+DSjWooLegzxoyZFr//JOsGwC8IXkhBcLXIb8gr8HPT5s6/"
    @"kzO1YsGUCfc8MGbOFqjRps81V/To0KBOnQqVRDhw6SbAJAGNCM2MuStAz1rJ/LuRdQOAkwWZMWXK"
    @"nKa7d1FUt+xFxJe/dfvXLHjiiRljaaMeMWMD1OhyxZgJQ3p0aNOmQY0aZQIXEJhnvFQTEHo3nDVr"
    @"L4MSXWcFu+aybgBCF5WNeeSRPi1q1C5+RyD0tk32Cbd/xETO1i13jJmJB9CRnwwZ0qPPgC4tmhIO"
    @"BF5AcKkmIAqm9uJPpaSdi3Vqsm0AAmAvsmAP3NKjT4cGDUqUz31wZ8TfF9km3P4HbnnkkRFjHhgx"
    @"ZcGWgAotxox5YMCAIUO+xMKBKmUqXLYJCIm6T0wVoFYCfjLJCy8UYbApj9wz4IYresVOyzyLTf2F"
    @"smu9YsGMJ6aMeeSW7zwwYsxMUoAr9kCZJQvmTLinx5BrpkwY0qdNR8wAbnfgskxAFE5ZGfrC9wBY"
    @"smYADjGxrZUGnbnarAt4c1KxOyBRxtrc90fi9t/xnZGcqSVLaaUOKLFlxZInGnQYM2Ym4UCfAVd0"
    @"6SRaXy/DBISx/+9ju00nHlCUU5NNAxDPSu/YspLk1oL1ResC+vcqI5k+4oFb/uOORx7FCMykiHXj"
    @"6SgEbCmxZkGNJ2ZMmHJPX4KBOV/YA00CyhTn+n7NmQ3ZsWbJnLknQl/wKy17BiC+t29z3Ds2bNhc"
    @"Qn/WM+fG/Gv0EueMueU//uZvvvPImBkzZixZsWYvF3B0dwvFazCbqnNGdBhwxYw1O0wAEJUIXcpZ"
    @"tq/UbAA+MWXCjAVrdmleQLFsY8YMwJGOgLQ6wMsjfvffMGfMHf/wF9/4Szb8Irc/untFBVMhO0lv"
    @"mdzBjIZMXNgDFepUqVFxeYBLIXCmcc6EBx4YiQh9gWsADRkzAEdQZSD/XCANKyNu+Yf/40/+4m8e"
    @"Jd8fuf1pdYLmO8YArKlQZcGCNVCiTosGdSpU3WMuxRBE+ZQHbrnlnglLmUJRaDJmAMJTP7I52mRH"
    @"QNG8suMEruJvxZQH/uMv/uQb/3DLjDnr2LlJv3NZJ2uHMSQ79gTUadLjih5tGt5eQLGNgN9EZbeb"
    @"H7nnTryptGxTwUxCxgzASUJvUGgk1hRQ7Is0evX2X3OpTrjlb77xF/9wx1jSo6dlv+K5lZ37qkST"
    @"Lo+MGdKjRZkyFN35TeT/t6yZM2UkUyhsurngV1YeDEBUnrlkzhNzljSkiv3SsANTZzzwH3/zF39z"
    @"y5gnNuzYvdAc+qZzQ+Au/EeG9GhKw/ClEO2oGBWAEVPmKff/Qp6RjDU5pFb4mgt1K7VuUTXA/mLc"
    @"f/8y3Mu8pBF3fJeRaQs27N25CFIef3gn98tejQZO2gSmop/dwJ2BFTPGIgPyxNKbRB39chiERTsh"
    @"efAADusB+7SoS0dA8YmLVO9dWdSjlPrOZRPvte66LSiKot87evToUI/tBRQ3wIryIWueGHPPrYyh"
    @"XV9CAhDyYgCQHK0pY+25NpbL6geIu6oPPDBmKrHqKef/lEi42f4KZAhrlw49ujSlRShj/uEHsXdD"
    @"aL/znVtGzFldSrl5Pt5ie+lbJ23Kouhijd4rt5/tJVE14VE6/W0oZAkSjwxjj49/7f/mTpbAI/c8"
    @"SgJsl/A8ioWVmo1CoBkjHtwY+rQawLCImnTZNACH8ae5+JfMmDihhksqCgpjjup//Md3Ho5uVcFL"
    @"o3fzWybAMubV1BMuLmAQa6SgFOX/rU8VrwEsaghEXkIAuw+wlo42o3R3OaNCzabdSop//uYb3/iX"
    @"B6ZiCNMf8fLnRhquZm4voEuDEqWCNggfdlRM3PbfkQRgUcmkATgyKHTvlG5Nm0tyZENxLtD4ybDF"
    @"P2tmPMrm37/cMT46MD0k4Hi+OoTY2bXPvxET8CCqCyWRCyt7z1oc7Aygjfg+dvmnmtSgsOYgkwYg"
    @"FSt1vXbjwtdsqRS6HOh48c+/3Evp7/7glf/IeYj+wj09mjSoYgLEqmgF/egzZxkTVs0Zccctd7EO"
    @"gAshPwYgitcWPDHjicXFlAPZvf9HvvMPf8v9f55y/7em8Ef+xpYVU+5piFgolAhoemOyi4bNq1gD"
    @"ML6k/L8hkwYgPPZta7EnjJkwoEWNKiWCAhat+nXqplD1iQkP3HMvevUbafnxlmbwgsV/ROTO+gAj"
    @"am6AiJEMrcrfKOI53ovi5ERKoNLz/wWuisqkATiKdVMfpGSlSZ0q1UK+MwYT4Jg89Ux2/23xz/ad"
    @"/86ODQBlmSJUoU6DKrVYc1CRiETAzSTAhaSWo9d6dGJdUciTAbAd22Pu6dJlQIcm9cJ2rtlxlTs3"
    @"re7RiX3ZKghXC/nqNJUvLWbDBhP9loAyNep06Eo+oIhn2GaVVqKisDyiNlXg5Z9RA3BUFiQa3GTk"
    @"r55kUEj0wCJdoPZV71z5zyMjZl6aKvB/LXn+jhF4DwnT/taCEjXadLnhhj4d6p4Kc973W+ItwHZf"
    @"aS33/oPlX9z8vyGTBkAID5JPh02bfdpUKMfm3eb58oxehf3XLMkJ93znOw9Sp/cReWpbG7cioMZI"
    @"eg0GdKlTpkypIOfWnl1bXGYmKK4vU2w2ywYgSRgrhzXxcJeWRKhRI2FRLlOw+/9zaVS59cZVvssr"
    @"DXwvwFYF7t10vEceGdCVfQHba5j3JWIrK7ZS/DS9yNpSIcMG4Gg5kJ0U9MA9XVriAVQK4wXEa/Cj"
    @"+n9b/b890gh9qvjn5B+RR7tncaXBIx4Y0KdNjZqY2XwTiaJZXYWJFACt0ytLi5v/N2TYAKQStQU9"
    @"0KFJTRJUgbQHF+e9iu5Sc6bSBGWyHhuRqox+831z1aHndfTp0KNNnXos0Mo3dkN55ioAJiKodnHk"
    @"zQD41VsNam6qnSlbKYqgdTL/P/bq1Ddeo8p7Lv3Qy/TvXXfgHV2ZHtQs1F6ALQF+FAlQU1bllwDl"
    @"/RW+kAwbgNhVnVSzMz5AlTJVKlRFy7ZYgtZR/v+BB4n+U6bV/9gLdpYjzVxGJsAkW6cMWFP30oB5"
    @"3Avw8/87UUGaxPaTCj8F4JAMGwDhcFpgKOKXJiKtUKFGkxr1QtyjoijV3P/Hkv+/Z3Jwl3q/v5f8"
    @"3s41yZjQoyh7AdazssvfaADOpLAq757jD5BhA+BuNcm7jUlSGQNQok6DDgM6tKi7MCDvhC7/P+Fe"
    @"GlVMBcBHXKTJfgJbFxjdIwf0CrAXEMhri3aSHmPLP9lUdQFk2AAYYkGuH6WGrJlTpUWXB8YMWbER"
    @"QWv7kLyZAitRbWVQ106pdpwQQg2TD3pLIBA9S+xYtlKB8Ch7Aa1c7wVEsxKiPQ6rq5S6BZjHF/l6"
    @"Mm8ADMFhD/ueDSWeRMXmkauEoHWe3z9bohrJdY9FqGL/aQ54pEB0R48OXdo0YjWBeSRq/xlx61SV"
    @"47pKeb5yXk2eN3bsPcoukkjQOszpXcrvzFuzdNt/vk59vFYtJAw+5sVGG65mq8zUIPoNyPlxkcNY"
    @"AtB/VffyqnZvePZck3kDEHKgZun7AbYo6J57r04++nn+MELd9u77wL1M/UuVQHuPpX9U6jIalzWW"
    @"IGTu2mWsqGZeznB0mvaeCNjIy/8feFZFlAA9JCchQCrRZtUDPbp06dKkLqmq/HkAh/o/Rv7T7FKv"
    @"P12oYg+eYNYjI/p0qeVublBkqpI+YzRVIUx91AWQeQ8g8D4O8HfK72KSzv7v5I2oAci8qpH3qj5g"
    @"4blzG8+C2w2z+P0yLkSeBzMQ5UjjhVUPIi+f1gIcmgKJPN5FXkvmDYAhJAxSkrShFwQ8xhy6+IOz"
    @"T+RSh85Jta73iSkI4bt1qx41sVvPxD7EfJE8rI4w4fyb+sZbvnOXkv47fS4KSX5CgEj8M/6dndcg"
    @"/MhVQtA6D4s/ThSjRrP6VjIPOW3q38cSihrhmDuZG5SnvQBf/nvHiiUjbvnXk1WN3y4uZdV75MQA"
    @"xEQs/KbfqGBmJh3sXbcZGGkF5qF2LZL/3kj+Py5U/cFCFaH9Jzj49k6y5vcMuGZIlxZVTyk4qwsn"
    @"Lv1hVRX+5S++8TffZaR6imdV9A5An5wYgBSioqCdSwXeSoegUbT3U4F5MQHRHfeeOyf/cU6d2njk"
    @"PJa+gBplz7Rm8ez6KdUdWxaMeeAf/uJPvvEP90xZSmVlFo//k8ivAYiwsd09LapU3KXZkNeXH5kQ"
    @"m9MwxszW/3++AfBTgaZ01lbOm72ATm6EQo1XtWbJmDv+5U/+j2/8xS1jZl5nZTL9eTHkygAclQvf"
    @"i1hopGhvnP9SLBDIA/uYAuDxQZXv7qamBFnRd3bOBDwyYkBPNluzfW79pmozU+FvufvfecnMmPBc"
    @"0RUAD8mVAUjByICaffOSt/QDSmIAokAgu9FqhAlojFJ9pP+7P/Nx27kEYx64pSuC7LUMJ8vjM5WX"
    @"TLnjH77xjb+9AeAXKACSJI8GIBK0tl8bK2+aaI3Th/zfBALl3OgF+kNQF9L/H69SO8fxm8zEXPoC"
    @"egzo0maXg52AaKbSLX/zF/9wy8g5/955vbx7vyFXBuCIoHUoCz90936jDpQeCGTdBBhZzh1btuxc"
    @"+a/3cj/yUn1mL8D4AFduhHY2F0386HfeMBmTVp17UxXcRfVyWfVikSsDcBRbRLPyzEDAHpwBqDof"
    @"IOuzA0wp0N4t/vMVpPtnKZoePGWaaQ1d31z6wiZGVWlyudIf6eTWAMQahKPJNiEhJZf8AdgTENKk"
    @"7n4z616A32oTtaie85KNJjMvWbBk5Vzo7C6kPYFXxvzoRqqt2LLDXjNZvg4+hRwagCOC1rbae8MC"
    @"2yZXknDAuHq1XAwRC1zAckR64yPLVE7sBSBeiQlNsnn3j15GpGlkSpjupfLfKir7J9EPr8595J9O"
    @"Dg3ACcw++lIivNDtCCB5dH+MaFZNQHaPywYn+zOHJqeOMTrWLVtJW/7Hv/zndf4fO/Lsbmh+IMUx"
    @"AFFpcNzK7+XCtX6C2SrMFv6FGy0y38XOwqUZJj6yRnz5r1gwlsp/s/c/9UTVTj3+osihAYgJWkeu"
    @"XHogYEKAisy6j4pXsvN2x3UAjZu9Syz/lNf/8YeU8odNYFJy+ypZMqXRlWCm/sQr/83ev52pGMTO"
    @"+itnKhWLHBqAZ7GBgN1AK1GhQoMGVaqUMipsbRuBN6xYSqoqi3fawyPKguscv/ubjb87/uFP/uT/"
    @"+Edm/0QzlbL3/p+JPBuAdEX7SCfAvtkVkQ7v0KAhajbZqwjwdQBmzKUG8PxLK36MoewI7L1dgPMf"
    @"Y7Ltd8GEW/7l//j/5P6fnP4Xn6l0/ldwNnJrAJ4NBJAC4TIN2vS4YUafDTXwTEAW7gXWZO08IdAx"
    @"T6laNZ92QEdWRRSk7GJ7Aec8k3Hn36gYWuf/L/7l7nhP5fnf/HOTWwPwDKGrDQyoyyjxeB9bdA/I"
    @"xlUQur77O+5ECHTripmyQCjL3wYpG7ZUz94UnHT+zVDTf/g//uRP/uZOon8t/kkl/wbgWCAQXa5W"
    @"L+iBHm2pCcyerKVVAh6JEsA0pr53+vV+7jEueJIwpU5VzuS5jFSa82/afv8//hLnf87K3Q4cl1r7"
    @"nyTnBsCl820gkBwKEnq14Pd0aVOlLBOFS2QnF2BDACvCfR4dgOeOce8UGEeM6NOkRuWMxvTQ+beZ"
    @"/z/5S1J/C2+eEqTU/p//zT8nOTcAjmMLxXaDjbilLaOtAFped0BWTIC9v86YMZdy2ywcmX+EdpEN"
    @"6NGnRSNWX/nZx2P/TXP+/xI95Y1T/cvSucwMRTEAlmQ0Gooc1IRbanLvN3f9pgQC2ckE2Hr7FSvW"
    @"KTVr569e2Dtvqs+AawZ0z1YU/Jzzf+ec/8OhH1nyq85MAQyAtx+Q9tZGijDG+bfdAYEIh5pAIAs9"
    @"gqHLWxzpAzxL3BrXXYgUiyc8nXGrMnrH9jIexjj/32LO/zrN+XeBQ3jp7j8UwgA40pawaQpZuwZh"
    @"s8Csqdg7VZvz5wLMEezlGE9UAn7iEaW1A21YMmfGk2ytncMDsFu4e5BZP6NXO//qBQDFMgDpe/sm"
    @"dWW+u5fFHt31Q+cJnNsEBN6/Wbkxxc+llS3fsmYtQcq5lr9Vfzru/B9qKfmPVoTCGIDkxJAYIVvg"
    @"idBz/hHNoDK4ISLBmUuDAln+R8f0JF/pxx5M9DdjBxGXK/ls/HDtlPO/U+f/JRTGAPjExELARq++"
    @"VuBeFANDoElIlcMWkc/FH2GZxR4Ae5TxluDP//vRcRjnfyxFv0nn3wZ66vyfpJAGIBWjEDT37h/2"
    @"AjHVdmWQQOA8vMDoZOauda7hef7y34t8+jHnP37AuuiPUDADkPI+x9uE104x0CoFRRKiFe9pzrPW"
    @"Iuc/A4LbR9fMubIU8Y2/aN8/cv7HoqN8rOxHnf8DCmYAjmIiR+P2JwOBvQsEKu7ijrT4Pu8I7TZg"
    @"FAxkpQsg7WjP8xfNudnKrB/f+b9zs37U+X8FBTMAsfc8mQkAs+zX0gxkHP6SPNAGAiWXCvz4fQF/"
    @"fKWvBJQJxb0TPYGfT5T/tIU/U+75j2/8yZ/8I0PUNur8v5aCGQBDSlFQPBBYYZd2IAbABALllAz8"
    @"x5kAvxfd5NU3kr7KhAHIEGHiqy1LEfz4i2/8yx1jp/d3zPnnclV/TlFIA8CxG5cfCOyw4cCeHaFc"
    @"PKa9BeImI/r6o47VFtg8sRDNfR1bZYirIu5lTuGUB/7z5L6ejgz6TD6LkqCQBiDmvKYtX7P8F6Jt"
    @"ZwOBANjRouZ07wLvyT6mQsC2LdvhmxOm3thKxccUIm2lZ/KRW75z60aoH3pNFy33/VIKaQAcxwIB"
    @"WyBs5weaDUArJt2kSpWKmAGfjwkHQpkIPOaRex5lJKiGARDPkuyxar9TJjzKrB87puxY4vb8LVSZ"
    @"ptgG4LlAwDj/pmB0J32DA9EObFCVXnc/pvwIExC6luU7d0fbXHQIcHgvN6bZhkn33HLnhn2YxmnN"
    @"/P8QBTYARwMBv1XYBAIlStLoMuOKPm26dGmI4k05EQy8twmIREseeWTELMOT9z6T6H2yZ2jJhImU"
    @"/t7y+BLVJHX+T1NgA+BIdwJNILB1P91JV9mQIX2uGIqOcBQOWN7bBIRS025yADPXZXepbSxh7PPA"
    @"EyIZc889j9xzy3cZ9eGbSnX+X80lGIBTgUDIRqJ/swTv6TNkyBe+MKRHhwZNGlRE/S5yK97TCFix"
    @"rQULFilqwJdwGwsPvrIdETuZ8nPPLf/wnXseGPHIPZOEATj1jEoqhTcAzwQCJvO/YSF3mTEdHhky"
    @"ZcaYAX269OjQ9LoI33f5R+PAdmylku3gkr6AcpZkJ6YVR9mLrOsd//IP3/iXe0bMeGLm6f2lPqHy"
    @"PIU3AI7gxH1ii1XlnzFhypgJY4YMGTLghiv67lmiR72vEYhPBCz+gk+eAftvVO1ntvy2sun3L9/4"
    @"i2/8x4gpS1as2DrJj8PSrUs7gz/I5RiA48vfxpkmy7wQWc4JXQYMuWbGkjUhIU3whna/j7Bs/NK9"
    @"rMUfpny1l+Vvc/52wPfffONv/uGeqRT9bkU9yTzWT9Fezhl8MxdiAJ7dEYimCO/YsWLJnCaPPDJm"
    @"Kd3lpnfQVxN+b08gI1Ign0aa2x9KUfSSBTMmzBjzwD3/8DffuWPsCqWiMV/eE+rifx0XYgAcwUlP"
    @"YC/1AGvWLKkxYcqMNVu2WM2gJtUUjdnCrc1PIDz41wqObVgyY8YD94x55JEHvnPHoyz/Tcq7GJLd"
    @"3skMc2kG4NRAUYOJPbdsKLNgKXlmU2m2A/ZOC98vEXrP9uGiX8bhwedhwu1f8MSEEbd8l9qICSMm"
    @"PDFnJTX/rvAnSHte5YVclAF4wUBRe2HtXV+enc5n5wmatqEKJVES9OsD3vMwn/tWvonO9j7F7Z9K"
    @"UZQxAGOmzJmzcPd+/72yTX5a/PNDXJQBeBHmQtrJ/+0YbNtBGLJlwJo6NWoyZSCpR6rX33GOu/1r"
    @"VsyY8cgdI0Y8MuKee1catWIrW6TKO3KZBiA8+r14LtkIiluxcVOPvmRGnzZNWtTdbLx4sTDec73P"
    @"0eWdY2U+ezasWXlu/x3/8cCIsWzHLqQycutkSH1xEDW2b+QCDcCRHYHg4FcCVyY0J6BEIO1CY4b0"
    @"6NGXtiHTL0BsRl4RF/Fb8c/w3nP7l8wYM2HCiEfu+M4DY2bi9m+cwv+hYVXn/81coAF4Bcb138iW"
    @"k9kenDDgigFDbhjSoU1DwoFyYkzmj4UD+TIdzx1tmPK57/YveRK3/5ERj1Ltr27/p6EGAI4t1Wh2"
    @"0FY+N1KUtkBoyoQBPVq0ZPJw1dsd+NFwoAg3sWMhlu/2r3lizpwJI+75j3tGjJgyeZXbny9zmUEu"
    @"1gAceOvHHEybDVgDG9Y8MWbMiDEzxgwZuHCgSZ0KlYsKB4JX/GQvW32m7SnN7Z+yELd/4y3++ODW"
    @"pGFVpb83cbEG4MXYXQFjBIwc1VTEux4YMGDIFTf06dKmTl3GkJcSCcU41rdIy4vnh5CoePmEIJcT"
    @"89rJ8PMnpoy544FHyfjfS9RvZg7uxe3XJN+HowYgSXgkGNjL/7esWIsyzSNd+gy5YcqVhANtWolw"
    @"4BJ1ag4HnZmYf84TT0wZ8cB/UttnDOqcJSt27Jweoi/LHvfPwtjfUd6AGoBkSJnUAY4XCNnKgC0r"
    @"lkxpMWLEhBkjhgzoMpBNQhsOnBqjFbj/Au/v5OWuF4iWUklE1ZPReegk13bScj1nzIiJqB9+516K"
    @"fBbPuP0cC6jycqqyixqAJMfczmj0uFEPXLFi7sKBCXcMGDLgOjUcODa+2KoC74+60tnFb2Iue9t0"
    @"0Rhxs6i3EvfPmIiSn3H809z+gnY9ZRc1AIfEe9Pjn9m9ge1BOPAguwMjCQe6tF04UPZMQHL2XyQH"
    @"ElUcZhtfwMQsclzJtPm50Vc0Ckcr1mzYsGDKiO/c8siIKbMDt//Y+xAkvo59U3kbagBieN0C/iyA"
    @"WO25EIUDGwkHzO7AlBmPsjswoE+LpssHWLe5HNsutE7yNjfTAKx6gknpldiJrHrgzTlYMGfCmLno"
    @"9s6ZMeKOO8/tX4ukR1qRzzGfSZf+u6IGIJ3w2Z9aZ3UnC+GJOlPRExqIsuAN1/RoU3c+QIkKFWoi"
    @"NBoQuFLYOUvWuTACoUzneWJMhxINqs4AmPaeHWuemPDAPROeWIqfNBPV4zkrNjLL5yVuf7bPR65R"
    @"A5DC4YjR2DcOpwzZO6LtZ7PhwJgJfbo03NzBCjUatCRJGBDIlPux3BfXZH0yYDTH6JFbSixoUBED"
    @"4E9fnMmcg7GId69ZsuRJzEHUaRk/81l+5YVEDcBRngk5k5Xte5ESWbFgQkuW9Jg+HepiAErUaNGh"
    @"T482VcqELJlyzx13MhNom/HCVyvSPeY7JRZ0JccRNwBrZlLWO+aJJVs2Lmg44faH6vZ/MmoAXsbx"
    @"kpTQCwZsOFBlxky62k0i0Mb+DboMuGZInwYlQhaM+M43/uY7I+apU+7OT5SIsw7+AwEL7mi5oqdo"
    @"z34nmj6mXnLhFPz23p3/Occ/e+egkKgBOEri2ky9IA/CgX0sQTZnTIM6FaBEiQpNulwx4oY+Tcrs"
    @"WfDId/7ib24ZM8/8VMBQ+iNhy4wmVclvxM/Czu2OLCWssRudBxkOdfvPiRqAF3EyHEgrf7HyVjNJ"
    @"90FAWTyAEWMe6dEUD2DMPf9xy4MbCpYlDn2fkC1L9mx4cuNS4np8ociqmR3+uMN/cNbU7T8nepZf"
    @"RPKm9cwvGv3gEmXKEv0DlChTo0VXcgA1SoTSXmSFrzZsnU6eV3tw7rcpJrsVSEBTcanNQ2y//0sd"
    @"/pTTfO7XfBnoWX41zxiDqHYg+gC7bCrUaNKScWOmpMhsAs6dsxz6EfW5HeTQf5X+kQUxYdS0B8Zd"
    @"/lMVlkdPpvLR6Bl/NS+8YtP2DYwJqFKjKsVBocy/WTsR0oQ2QUYMgP+a0ucqvPhJTv1UL8fPRs/4"
    @"q3lBOHA42DNyngMJC+y84b0rBI4i5Uzc+9/hPCUbq478WvJkKZ+HnvE38eqrNx4cmKeI99RHHkAm"
    @"7ozuIIIXxvGvPnF6CZ4T3QX4XOwcQkhZ5t53s4hO3ikgagDej+f0a2KT7KIpdi/eYTj3q1MKSFYv"
    @"t9zxrss4cw7yG1+dxvmZpfT2p1AOeK9rvChrpSivo4CoAfgIXuouv0ZVP88U5XUUELXNH8wrvd/M"
    @"Of9KsVEPQFEuGDUAn4m6woqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqi"
    @"KIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqi"
    @"KIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKIqiKK/h"
    @"/wcGhacUwEae1wAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAyNi0wMi0yN1QxMjo1MDoxMSswMDowMMXF"
    @"oWQAAAAldEVYdGRhdGU6bW9kaWZ5ADIwMjYtMDItMjdUMTI6NTA6MTErMDA6MDC0mBnYAAAAAElF"
    @"TkSuQmCC"
    ;

static UIImage *wcpl_repeatMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        // 优先使用火焰图标（PNG 内嵌），避免外部资源缺失导致不显示。
        @try {
            NSData *flameData = [[NSData alloc] initWithBase64EncodedString:kWCPLRepeatMenuFlameIconBase64
                                                                   options:NSDataBase64DecodingIgnoreUnknownCharacters];
            if ([flameData isKindOfClass:[NSData class]] && flameData.length > 0) {
                CGFloat scale = [UIScreen mainScreen].scale;
                UIImage *flameImage = [UIImage imageWithData:flameData scale:scale];
                if ([flameImage isKindOfClass:[UIImage class]]) {
                    // 缩放到 24pt，降低后续 tint/拷贝的开销
                    CGSize targetSize = CGSizeMake(24.0f, 24.0f);
                    UIGraphicsBeginImageContextWithOptions(targetSize, NO, scale);
                    [flameImage drawInRect:(CGRect){CGPointZero, targetSize}];
                    UIImage *rendered = UIGraphicsGetImageFromCurrentImageContext();
                    UIGraphicsEndImageContext();
                    if ([rendered isKindOfClass:[UIImage class]]) {
                        flameImage = rendered;
                    }
                    if ([flameImage respondsToSelector:@selector(imageWithRenderingMode:)]) {
                        flameImage = [flameImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
                    }
                    icon = flameImage;
                    return;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

        // 兜底：老版本使用的循环箭头图标
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M20 7H9C6.79086 7 5 8.79086 5 11V11' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M8 4L5 7L8 10' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M4 17H15C17.2091 17 19 15.2091 19 13V13' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M16 20L19 17L16 14' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "</svg>";
        icon = WCPLIconImageFromSVGOrSystemSymbols(svg, @[@"arrow.2.squarepath"], 16);
    });
    return icon;
}

static id wcpl_createClownMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"小丑";
    UIImage *icon = wcpl_clownMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }

    return menuItem;
}

static id wcpl_createRepeatMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"复读";
    UIImage *icon = wcpl_repeatMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }
    return menuItem;
}

static NSMutableDictionary<NSString *, NSString *> *wcpl_localReplaceMapForController(id controller, BOOL createIfNeeded) {
    if (!controller) return nil;
    NSMutableDictionary *map = objc_getAssociatedObject(controller, kWCPLLocalReplaceMapKey);
    if (!map && createIfNeeded) {
        map = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(controller, kWCPLLocalReplaceMapKey, map, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return map;
}

static NSString *wcpl_messageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    unsigned int localId = msgWrap.m_uiMesLocalID;
    long long svrId = msgWrap.m_n64MesSvrID;
    if (localId == 0 && svrId == 0) {
        return [NSString stringWithFormat:@"%@|%@|%p", fromUser, toUser, msgWrap];
    }
    return [NSString stringWithFormat:@"%@|%@|%u|%lld", fromUser, toUser, localId, svrId];
}

static BOOL wcpl_isPlainTextMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 1);
}

static BOOL wcpl_isQuoteReplyMessage(CMessageWrap *msgWrap) {
    return WCPLIsQuoteReplyAppMessage(msgWrap);
}

static BOOL wcpl_isTransferMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    BOOL hasWCPayInfoXML = [content isKindOfClass:[NSString class]] &&
        [content rangeOfString:@"<wcpayinfo" options:NSCaseInsensitiveSearch].location != NSNotFound;

    BOOL hasTransferSubtype = NO;
    BOOL hasTransferId = NO;
    if (hasWCPayInfoXML) {
        hasTransferSubtype =
            ([content rangeOfString:@"<paysubtype>3</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype>4</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[3]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[4]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound);
        hasTransferId = [content rangeOfString:@"<transferid" options:NSCaseInsensitiveSearch].location != NSNotFound;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (payInfo) {
            NSInteger subType = 0;
            @try {
                id value = [payInfo valueForKey:@"m_uiPaySubType"];
                if ([value respondsToSelector:@selector(integerValue)]) {
                    subType = [value integerValue];
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

            if (subType == 3 || subType == 4) {
                hasTransferSubtype = YES;
            }

            NSString *transferID = nil;
            @try {
                id value = [payInfo valueForKey:@"m_nsTransferID"];
                if ([value isKindOfClass:[NSString class]]) {
                    transferID = (NSString *)value;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            if (transferID.length > 0) {
                hasTransferId = YES;
            }
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    if (hasTransferSubtype || hasTransferId) {
        return YES;
    }

    return hasWCPayInfoXML &&
           [content rangeOfString:@"<feedesc" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static NSString *wcpl_regexEscapedReplacementString(NSString *text) {
    if (![text isKindOfClass:[NSString class]]) {
        return @"";
    }
    NSString *result = [text stringByReplacingOccurrencesOfString:@"\\" withString:@"\\\\"];
    result = [result stringByReplacingOccurrencesOfString:@"$" withString:@"\\$"];
    return result;
}

static NSString *wcpl_extractTransferAmountFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>",
        @"<feedesc>(.*?)</feedesc>",
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *value = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = WCPLTrimText(value);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_normalizeTransferAmountText(NSString *text) {
    NSString *trimmed = WCPLTrimText(text);
    if (trimmed.length == 0) {
        return nil;
    }
    if ([trimmed hasPrefix:@"￥"] || [trimmed hasPrefix:@"¥"] || [trimmed hasPrefix:@"$"]) {
        return trimmed;
    }

    BOOL looksNumeric = YES;
    NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:@"0123456789.,"];
    for (NSUInteger index = 0; index < trimmed.length; index++) {
        unichar ch = [trimmed characterAtIndex:index];
        if (![allowed characterIsMember:ch]) {
            looksNumeric = NO;
            break;
        }
    }

    if (looksNumeric) {
        return [@"￥" stringByAppendingString:trimmed];
    }
    return trimmed;
}

static NSString *wcpl_transferXMLByReplacingAmount(NSString *content, NSString *amount) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [normalized stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];
    NSString *escapedCDATA = wcpl_regexEscapedReplacementString(safeCDATA);
    NSString *escapedPlain = wcpl_regexEscapedReplacementString(normalized);

    NSString *result = [content copy];
    BOOL replaced = NO;

    NSArray<NSDictionary<NSString *, NSString *> *> *rules = @[
        @{ @"pattern": @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>", @"template": [NSString stringWithFormat:@"<feedesc><![CDATA[%@]]></feedesc>", escapedCDATA] },
        @{ @"pattern": @"<feedesc>(.*?)</feedesc>", @"template": [NSString stringWithFormat:@"<feedesc>%@</feedesc>", escapedPlain] },
        @{ @"pattern": @"<receiverdesc><!\\[CDATA\\[(.*?)\\]\\]></receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc><![CDATA[%@]]></receiverdesc>", escapedCDATA] },
        @{ @"pattern": @"<receiverdesc>(.*?)</receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc>%@</receiverdesc>", escapedPlain] },
        @{ @"pattern": @"<senderdesc><!\\[CDATA\\[(.*?)\\]\\]></senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc><![CDATA[%@]]></senderdesc>", escapedCDATA] },
        @{ @"pattern": @"<senderdesc>(.*?)</senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc>%@</senderdesc>", escapedPlain] },
    ];

    for (NSDictionary<NSString *, NSString *> *rule in rules) {
        NSString *pattern = rule[@"pattern"];
        NSString *replacementTemplate = rule[@"template"];
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        if (!regex) {
            continue;
        }
        NSUInteger count = [regex numberOfMatchesInString:result options:0 range:NSMakeRange(0, result.length)];
        if (count == 0) {
            continue;
        }
        replaced = YES;
        result = [regex stringByReplacingMatchesInString:result options:0 range:NSMakeRange(0, result.length) withTemplate:replacementTemplate];
    }

    return replaced ? result : nil;
}

static void wcpl_applyTransferAmountToPayInfo(CMessageWrap *msgWrap, NSString *amount) {
    if (!msgWrap) {
        return;
    }
    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (!payInfo) {
            return;
        }

        @try {
            [payInfo setValue:normalized forKey:@"m_nsFeeDesc"];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        @try {
            [payInfo setValue:normalized forKey:@"m_receiverDesc"];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        @try {
            [payInfo setValue:normalized forKey:@"m_senderDesc"];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static BOOL wcpl_isClownSupportedMessage(CMessageWrap *msgWrap) {
    return wcpl_isPlainTextMessage(msgWrap) || wcpl_isQuoteReplyMessage(msgWrap) || wcpl_isTransferMessage(msgWrap);
}

static NSString *wcpl_extractQuoteTitleFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<title><!\\[CDATA\\[(.*?)\\]\\]></title>",
        @"<title>(.*?)</title>"
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:NSRegularExpressionDotMatchesLineSeparators error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *title = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = WCPLTrimText(title);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_quoteXMLByReplacingTitle(NSString *content, NSString *title) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *trimmed = WCPLTrimText(title);
    if (trimmed.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [trimmed stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];

    NSRegularExpression *cdataRegex = [NSRegularExpression regularExpressionWithPattern:@"<title><!\\[CDATA\\[(.*?)\\]\\]></title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *cdataMatch = [cdataRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (cdataMatch.numberOfRanges >= 2) {
        NSRange titleRange = [cdataMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:safeCDATA];
        }
    }

    NSRegularExpression *plainRegex = [NSRegularExpression regularExpressionWithPattern:@"<title>(.*?)</title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *plainMatch = [plainRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (plainMatch.numberOfRanges >= 2) {
        NSRange titleRange = [plainMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:trimmed];
        }
    }

    return nil;
}

static NSString *wcpl_displayTextForMessage(CMessageWrap *msgWrap, id cell) {
    if (!msgWrap) {
        return nil;
    }

    if (wcpl_isPlainTextMessage(msgWrap)) {
        return msgWrap.m_nsContent ?: @"";
    }

    if (wcpl_isTransferMessage(msgWrap)) {
        NSString *amount = wcpl_extractTransferAmountFromXML(msgWrap.m_nsContent);
        if (amount.length > 0) {
            return amount;
        }

        @try {
            if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
                [msgWrap parseWCPayInfoItemIfNeed];
            }
            id payInfo = nil;
            if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
                payInfo = msgWrap.m_oWCPayInfoItem;
            }
            if (payInfo && [payInfo respondsToSelector:@selector(m_nsFeeDesc)]) {
                id feeDesc = ((id (*)(id, SEL))objc_msgSend)(payInfo, @selector(m_nsFeeDesc));
                if ([feeDesc isKindOfClass:[NSString class]]) {
                    NSString *trimmed = WCPLTrimText(feeDesc);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

        return WCPLTrimText(msgWrap.m_nsContent);
    }

    if (!wcpl_isQuoteReplyMessage(msgWrap)) {
        return nil;
    }

    if (cell && [cell respondsToSelector:@selector(viewModel)]) {
        @try {
            id viewModel = [cell viewModel];
            if (viewModel && [viewModel respondsToSelector:@selector(contentText)]) {
                id text = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(contentText));
                if ([text isKindOfClass:[NSString class]]) {
                    NSString *trimmed = WCPLTrimText(text);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    NSString *title = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
    if (title.length > 0) {
        return title;
    }

    return WCPLTrimText(msgWrap.m_nsContent);
}

static UIColor *wcpl_menuIconTintColor(void) {
    return [UIColor colorWithWhite:1.0 alpha:1.0];
}

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon) {
    wcpl_applyMenuItemIconWithTint(menuItem, icon, YES);
}

static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint) {
    WCPLApplyMenuItemIcon(menuItem, icon, shouldTint ? wcpl_menuIconTintColor() : nil);
}

static CMessageWrap *wcpl_messageWrapFromCell(id cell) {
    if (!cell) return nil;
    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = [cell viewModel];
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            @try {
                return [viewModel messageWrap];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
        if ([viewModel respondsToSelector:@selector(msgWrap)]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
        @try {
            id wrap = [viewModel valueForKey:@"messageWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        @try {
            id wrap = [viewModel valueForKey:@"msgWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    return nil;
}

static void wcpl_setLocalReplaceText(id controller, CMessageWrap *msgWrap, NSString *text) {
    if (!controller || !msgWrap) return;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return;
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, YES);
    if (!map) return;
    if (text.length > 0) {
        map[key] = text;
    } else {
        [map removeObjectForKey:key];
    }
}

static NSString *wcpl_localReplaceText(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return nil;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return nil;
    NSDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    return map[key];
}

static NSString *wcpl_originalContentForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    id stored = objc_getAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey);
    return [stored isKindOfClass:[NSString class]] ? (NSString *)stored : nil;
}

static BOOL wcpl_syncLocalReplaceContent(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return NO;
    if (!wcpl_isClownSupportedMessage(msgWrap)) return NO;

    NSString *replaceText = wcpl_localReplaceText(controller, msgWrap);
    NSString *originText = msgWrap.m_nsContent ?: @"";
    NSString *storedOrigin = wcpl_originalContentForMessageWrap(msgWrap);

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isQuoteReply = wcpl_isQuoteReplyMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    if (replaceText.length > 0) {
        if (isPlainText) {
            if (!storedOrigin && ![originText isEqualToString:replaceText]) {
                objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
            if (![originText isEqualToString:replaceText]) {
                msgWrap.m_nsContent = replaceText;
                return YES;
            }
            return NO;
        }

        if (isQuoteReply) {
            NSString *replacedContent = wcpl_quoteXMLByReplacingTitle(originText, replaceText);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                return YES;
            }
        }

        if (isTransfer) {
            NSString *normalizedAmount = wcpl_normalizeTransferAmountText(replaceText);
            NSString *replacedContent = wcpl_transferXMLByReplacingAmount(originText, normalizedAmount);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
                return YES;
            }
            wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
        }

        return NO;
    }

    if (storedOrigin) {
        if (![originText isEqualToString:storedOrigin]) {
            msgWrap.m_nsContent = storedOrigin;
            if (isTransfer) {
                wcpl_applyTransferAmountToPayInfo(msgWrap, wcpl_extractTransferAmountFromXML(storedOrigin));
            }
        }
        objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, nil, OBJC_ASSOCIATION_ASSIGN);
        return YES;
    }
    return NO;
}

static void wcpl_clearLocalReplaceMap(id controller) {
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    [map removeAllObjects];
}

static UIViewController *wcpl_viewControllerFromCell(id cell) {
    if (!cell) {
        return nil;
    }

    id viewController = nil;
    if ([cell respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [cell getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell respondsToSelector:@selector(wchook_findChatViewController)]) {
        @try {
            viewController = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(wchook_findChatViewController));
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell isKindOfClass:[UIView class]]) {
        UIResponder *responder = [(UIView *)cell nextResponder];
        while (responder) {
            if ([responder isKindOfClass:[UIViewController class]]) {
                viewController = (UIViewController *)responder;
                break;
            }
            responder = [responder nextResponder];
        }
    }

    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    return (UIViewController *)viewController;
}

static __attribute__((unused)) UIViewController *wcpl_viewControllerFromResponderChain(UIResponder *responder) {
    UIResponder *cursor = responder;
    while (cursor) {
        if ([cursor isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)cursor;
        }
        if (![cursor respondsToSelector:@selector(nextResponder)]) {
            break;
        }
        cursor = [cursor nextResponder];
    }
    return nil;
}

static BOOL wcpl_isRepeatLongPressMenuEnabled(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return config ? config.repeatLongPressMenuEnable : YES;
}

static BOOL wcpl_isClownFeatureEnabled(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return config ? config.clownFeatureEnable : YES;
}

static NSArray *wcpl_injectClownMenuItemIfNeeded(id cell, NSArray *items) {
    if (!wcpl_isClownFeatureEnabled()) {
        return items;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleLocalReplaceMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
                if (itemAction == action) {
                    return mutableItems;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    id menuItem = wcpl_createClownMenuItem(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        WCPLLogDebug(@"[小丑] 注入长按菜单: type=%u class=%@", msgWrap.m_uiMessageType, NSStringFromClass([cell class]));
    }

    return mutableItems;
}

static BOOL wcpl_isRepeatSupportedForCell(id cell) {
    if (!wcpl_isRepeatLongPressMenuEnabled()) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!msgWrap) {
        return NO;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    SEL supportSel = @selector(wchook_isMessageSupportedForRepeat:);
    if ([cell respondsToSelector:supportSel]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, supportSel, msgWrap);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    switch (msgWrap.m_uiMessageType) {
        case 1:
            return YES;
        case 3:
            return config.repeatSupportImageEnable;
        case 34:
            return config.repeatSupportVoiceEnable;
        case 43:
            return config.repeatSupportVideoEnable;
        case 47:
            return config.repeatSupportEmoticonEnable;
        default:
            return NO;
    }
}

static NSArray *wcpl_injectRepeatMenuItemIfNeeded(id cell, NSArray *items) {
    if (!wcpl_isRepeatSupportedForCell(cell)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleRepeatMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if (![item isKindOfClass:menuItemClass] || ![item respondsToSelector:@selector(action)]) {
            continue;
        }
        @try {
            SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
            if (itemAction == action) {
                return mutableItems;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    id menuItem = wcpl_createRepeatMenuItem(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
        WCPLLogDebug(@"[复读] 注入长按菜单: type=%u class=%@",
                     msgWrap ? msgWrap.m_uiMessageType : 0,
                     NSStringFromClass([cell class]) ?: @"(nil)");
    }
    return mutableItems;
}

static void wcpl_perf_logRepeatDispatchResult(NSString *result,
                                              uint64_t startMs,
                                              CMessageWrap *msgWrap,
                                              id cell) {
    uint64_t endMs = wcpl_message_perf_uptimeMillis();
    uint64_t elapsedMs = endMs >= startMs ? (endMs - startMs) : 0;
    WCPLLogInfo(@"[PERF][REPEAT] phase=menu_dispatch result=%@ elapsed_ms=%llu local_id=%u msg_type=%u class=%@",
                result ?: @"unknown",
                (unsigned long long)elapsedMs,
                msgWrap ? msgWrap.m_uiMesLocalID : 0,
                msgWrap ? msgWrap.m_uiMessageType : 0,
                NSStringFromClass([cell class]) ?: @"(nil)");
}

static void wcpl_handleRepeatMenuActionForCellInternal(id cell, uint64_t startMs) {
    if (!cell) {
        return;
    }

    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            wcpl_handleRepeatMenuActionForCellInternal(cell, startMs);
        });
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!msgWrap || !wcpl_isRepeatSupportedForCell(cell)) {
        wcpl_perf_logRepeatDispatchResult(@"unsupported_or_missing_msg", startMs, msgWrap, cell);
        return;
    }

    SEL repeatSel = @selector(wchook_repeatMessageWrap:);
    if (![cell respondsToSelector:repeatSel]) {
        WCPLLogWarning(@"[复读] 菜单触发失败: selector 缺失 class=%@",
                       NSStringFromClass([cell class]) ?: @"(nil)");
        wcpl_perf_logRepeatDispatchResult(@"selector_missing", startMs, msgWrap, cell);
        return;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(cell, repeatSel, msgWrap);
        wcpl_perf_logRepeatDispatchResult(@"dispatch_ok", startMs, msgWrap, cell);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[复读] 菜单触发异常: class=%@ reason=%@",
                       NSStringFromClass([cell class]) ?: @"(nil)",
                       exception.reason ?: @"unknown");
        wcpl_perf_logRepeatDispatchResult(@"dispatch_exception", startMs, msgWrap, cell);
    }
}

static void wcpl_handleRepeatMenuActionForCell(id cell) {
    wcpl_handleRepeatMenuActionForCellInternal(cell, wcpl_message_perf_uptimeMillis());
}

static void wcpl_reloadCellAfterLocalReplace(id viewController, CMessageWrap *msgWrap, id cell) {
    if (!viewController || !msgWrap) {
        return;
    }

    if ([viewController respondsToSelector:@selector(clearNodeLayoutCache)]) {
        @try {
            [(BaseMsgContentViewController *)viewController clearNodeLayoutCache];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([viewController respondsToSelector:@selector(reloadNodeWithMessageWrap:)]) {
        @try {
            [viewController reloadNodeWithMessageWrap:msgWrap];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([viewController respondsToSelector:@selector(reloadVisibleNodeWithCellView:)]) {
        @try {
            [(BaseMsgContentViewController *)viewController reloadVisibleNodeWithCellView:cell];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        if (![viewController respondsToSelector:@selector(getMsgTableView)]) return;
        UITableView *tableView = nil;
        @try {
            id tv = [(BaseMsgContentViewController *)viewController getMsgTableView];
            if ([tv isKindOfClass:[UITableView class]]) {
                tableView = (UITableView *)tv;
            }
        } @catch (__unused NSException *exception) {
            tableView = nil;
        }
        if (!tableView) return;
        [UIView performWithoutAnimation:^{
            @try {
                [tableView beginUpdates];
                [tableView endUpdates];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }];
    });
}

static void wcpl_presentClownEditorForCell(id cell) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return;
    }

    UIViewController *viewController = wcpl_viewControllerFromCell(cell);
    if (!viewController || ![viewController respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return;
    }

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    NSString *originText = wcpl_displayTextForMessage(msgWrap, cell);
    if (originText.length == 0) {
        originText = msgWrap.m_nsContent ?: @"";
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"小丑"
                                                                   message:@"仅在当前聊天页面生效，离开后自动恢复"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.text = originText;
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
        if (isTransfer) {
            textField.keyboardType = UIKeyboardTypeDecimalPad;
            textField.placeholder = @"例如：88.88";
        }
    }];

    __weak id weakCell = cell;
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        __strong id strongCell = weakCell;
        if (!strongCell) {
            return;
        }

        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (isTransfer) {
            trimmed = wcpl_normalizeTransferAmountText(trimmed) ?: @"";
        }

        if (isPlainText && trimmed.length > 0 && !wcpl_originalContentForMessageWrap(msgWrap)) {
            NSString *savedOriginText = msgWrap.m_nsContent ?: @"";
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, savedOriginText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        wcpl_setLocalReplaceText(viewController, msgWrap, trimmed);
        if (wcpl_isClownSupportedMessage(msgWrap)) {
            wcpl_syncLocalReplaceContent(viewController, msgWrap);
        }

        WCPLLogInfo(@"[小丑] 应用替换: type=%u len=%lu", msgWrap.m_uiMessageType, (unsigned long)trimmed.length);
        wcpl_reloadCellAfterLocalReplace(viewController, msgWrap, strongCell);
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];
    [viewController presentViewController:alert animated:YES completion:nil];
}
