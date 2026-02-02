//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSSelectableMenuItem : NSObject
{
    long long _type;
    NSString *_title;
}

+ (id)textItemWithText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

