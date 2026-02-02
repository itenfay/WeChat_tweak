//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveGiftNewCustomizationCommitTask : NSObject
{
    _Bool _modifyNewCustomText;
    NSString *_giftProductId;
    NSString *_customText;
    NSArray *_componentKeyList;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSArray *componentKeyList; // @synthesize componentKeyList=_componentKeyList;
@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) _Bool modifyNewCustomText; // @synthesize modifyNewCustomText=_modifyNewCustomText;
@property(retain, nonatomic) NSString *giftProductId; // @synthesize giftProductId=_giftProductId;

@end

