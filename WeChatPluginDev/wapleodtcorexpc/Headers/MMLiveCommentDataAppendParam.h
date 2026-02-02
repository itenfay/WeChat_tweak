//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveCommentDataAppendParam : NSObject
{
    _Bool _isCustomAppendAllData;
    _Bool _unableSynchronizeBack;
    unsigned int _refreshCommentCount;
}

+ (id)createAppendParamWithRefreshCommentCnt:(unsigned int)arg1 isCustomAppendAll:(_Bool)arg2;
@property(nonatomic) _Bool unableSynchronizeBack; // @synthesize unableSynchronizeBack=_unableSynchronizeBack;
@property(nonatomic) _Bool isCustomAppendAllData; // @synthesize isCustomAppendAllData=_isCustomAppendAllData;
@property(nonatomic) unsigned int refreshCommentCount; // @synthesize refreshCommentCount=_refreshCommentCount;

@end

