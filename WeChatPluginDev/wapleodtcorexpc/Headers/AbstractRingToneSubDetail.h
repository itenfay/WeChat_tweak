//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AbstractRingToneSubDetail : NSObject
{
    NSString *_title;
    NSString *_authorDesc;
    NSString *_thumbUrl;
    NSMutableArray *_searchHitWords;
    NSString *_outsideTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *outsideTitle; // @synthesize outsideTitle=_outsideTitle;
@property(retain, nonatomic) NSMutableArray *searchHitWords; // @synthesize searchHitWords=_searchHitWords;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *authorDesc; // @synthesize authorDesc=_authorDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

