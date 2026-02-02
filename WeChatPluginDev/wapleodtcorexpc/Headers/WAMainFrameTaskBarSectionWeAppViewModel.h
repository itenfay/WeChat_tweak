//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAMainFrameTaskBarSectionWeAppViewModel : NSObject
{
    NSMutableArray *_appItems;
    NSMutableArray *_arrMyWeAppItemWhenShowCommonUse;
    _Bool _isMyWeApp;
    _Bool _isCommonUseWeApp;
    _Bool _showMore;
    _Bool _isImmediatelyRefreshData;
    NSString *_session;
    long long _maxShowCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxShowCount; // @synthesize maxShowCount=_maxShowCount;
@property(nonatomic) _Bool isImmediatelyRefreshData; // @synthesize isImmediatelyRefreshData=_isImmediatelyRefreshData;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(nonatomic) _Bool isCommonUseWeApp; // @synthesize isCommonUseWeApp=_isCommonUseWeApp;
@property(nonatomic) _Bool isMyWeApp; // @synthesize isMyWeApp=_isMyWeApp;
- (long long)commuseWeappCount;
- (long long)weMyAppCount;
- (void)reportItemMove:(id)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (id)deleteDataForIndex:(long long)arg1;
- (id)itemsDescription;
- (long long)allCount;
- (long long)currentWeAppCount;
- (long long)target;
- (long long)count;
- (void)updateShowMoreState;
- (id)dataForIndex:(long long)arg1;
- (id)appItemDatas;
- (void)fillWeAppItems:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2;
- (id)init:(_Bool)arg1;

@end

