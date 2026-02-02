//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface COpenIMCustomItem : NSObject
{
    NSString *_title;
    NSArray *_details;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

