//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBillEntryInfo : NSObject
{
    NSString *_entry_word;
    NSString *_entry_url;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *entry_url; // @synthesize entry_url=_entry_url;
@property(retain, nonatomic) NSString *entry_word; // @synthesize entry_word=_entry_word;
- (void)genFromDic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

