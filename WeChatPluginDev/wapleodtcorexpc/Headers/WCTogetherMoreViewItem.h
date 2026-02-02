//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTogetherMoreViewItem : NSObject
{
    _Bool _isLoading;
    _Bool _hasMoreData;
    NSString *_tipsText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) Class cellClass;

@end

