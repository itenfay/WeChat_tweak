//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCMultiLanguageItem;

@interface WCAdDislikeInfo : NSObject
{
    _Bool _forbidClick;
    _Bool _isPersonalizedAdClose;
    _Bool _useNewStyle;
    NSArray *_reasonList;
    WCMultiLanguageItem *_title;
    WCMultiLanguageItem *_forbidClickReason;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
@property(nonatomic) _Bool isPersonalizedAdClose; // @synthesize isPersonalizedAdClose=_isPersonalizedAdClose;
@property(retain, nonatomic) WCMultiLanguageItem *forbidClickReason; // @synthesize forbidClickReason=_forbidClickReason;
@property(nonatomic) _Bool forbidClick; // @synthesize forbidClick=_forbidClick;
@property(retain, nonatomic) WCMultiLanguageItem *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *reasonList; // @synthesize reasonList=_reasonList;
- (id)validReasonList;
- (long long)validReasonCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

