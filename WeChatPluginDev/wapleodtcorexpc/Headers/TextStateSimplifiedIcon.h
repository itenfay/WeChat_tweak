//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateSimplifiedIcon : NSObject
{
    NSString *_iconId;
    NSString *_iconDescription;
    NSString *_iconUrl;
    unsigned long long _iconOption;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long iconOption; // @synthesize iconOption=_iconOption;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *iconDescription; // @synthesize iconDescription=_iconDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
- (id)initWithIconId:(id)arg1 iconActions:(id)arg2;
- (id)initWithIcon:(id)arg1;

@end

