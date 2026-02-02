//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFilterItem : NSObject
{
    NSString *_title;
    NSString *_detail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

