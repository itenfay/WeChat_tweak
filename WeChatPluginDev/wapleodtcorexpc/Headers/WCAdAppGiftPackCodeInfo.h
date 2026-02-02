//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdAppGiftPackCodeInfo : NSObject
{
    NSString *_appGiftPackCode;
    NSString *_appGiftPackCodeTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appGiftPackCodeTips; // @synthesize appGiftPackCodeTips=_appGiftPackCodeTips;
@property(retain, nonatomic) NSString *appGiftPackCode; // @synthesize appGiftPackCode=_appGiftPackCode;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

