//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPoiGroupBuyRequestParams : NSObject
{
    int _commentScene;
    unsigned long long _groupBuyTab;
    NSString *_poiId;
    NSString *_jumpInfoToGroupbuyByPass;
    NSString *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *jumpInfoToGroupbuyByPass; // @synthesize jumpInfoToGroupbuyByPass=_jumpInfoToGroupbuyByPass;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(nonatomic) unsigned long long groupBuyTab; // @synthesize groupBuyTab=_groupBuyTab;

@end

