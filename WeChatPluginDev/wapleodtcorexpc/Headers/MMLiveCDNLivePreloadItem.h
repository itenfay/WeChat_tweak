//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface MMLiveCDNLivePreloadItem : NSObject
{
    NSString *_url;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

