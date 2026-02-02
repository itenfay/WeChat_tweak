//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCCellGroup : NSObject
{
    long long _homepageType;
    NSDate *_date;
    NSString *_title;
    long long _titleAlignment;
    NSString *_location;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
- (id)initWithHomepageType:(long long)arg1;

@end

