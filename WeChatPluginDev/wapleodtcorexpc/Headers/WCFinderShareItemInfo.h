//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface WCFinderShareItemInfo : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_iconUrl;
    NSString *_fromFeedId;
    WCFinderDataItem *_fromDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(copy, nonatomic) NSString *fromFeedId; // @synthesize fromFeedId=_fromFeedId;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

