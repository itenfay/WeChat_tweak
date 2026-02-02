//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMultiLanguageItem;

@interface WCAdFeedbackItem : NSObject
{
    NSString *_url;
    WCMultiLanguageItem *_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMultiLanguageItem *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

