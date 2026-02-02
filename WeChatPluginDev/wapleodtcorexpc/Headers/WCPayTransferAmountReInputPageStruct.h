//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayTransferAmountReInputPageStruct : NSObject
{
    NSString *_title;
    NSString *_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;

@end

