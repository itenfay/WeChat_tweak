//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderPoiGroupBuyListOpenParams : NSObject
{
    NSString *_poiId;
    NSString *_jumpInfoToGroupbuyByPass;
    NSMutableDictionary *_reportDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportDict; // @synthesize reportDict=_reportDict;
@property(retain, nonatomic) NSString *jumpInfoToGroupbuyByPass; // @synthesize jumpInfoToGroupbuyByPass=_jumpInfoToGroupbuyByPass;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;

@end

