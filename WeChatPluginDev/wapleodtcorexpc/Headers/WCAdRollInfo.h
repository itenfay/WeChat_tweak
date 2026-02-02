//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdRollInfo : NSObject
{
    NSString *_iconUrl;
    NSArray *_textList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *textList; // @synthesize textList=_textList;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

