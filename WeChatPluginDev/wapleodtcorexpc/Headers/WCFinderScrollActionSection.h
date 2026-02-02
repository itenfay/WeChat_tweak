//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderScrollActionSection : NSObject
{
    NSString *_title;
    long long _secType;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)compare:(id)arg1;

@end

