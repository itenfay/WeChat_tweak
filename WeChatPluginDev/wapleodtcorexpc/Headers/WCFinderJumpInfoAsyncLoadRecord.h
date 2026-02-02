//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, WCFinderDataItem, WCFinderJumpInfo;

@interface WCFinderJumpInfoAsyncLoadRecord : NSObject
{
    WCFinderDataItem *_dataItem;
    WCFinderJumpInfo *_jumpInfo;
    NSDate *_lastFetchingTime;
    NSArray *_styles;
    NSString *_stylesIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stylesIdentifier; // @synthesize stylesIdentifier=_stylesIdentifier;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSDate *lastFetchingTime; // @synthesize lastFetchingTime=_lastFetchingTime;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

