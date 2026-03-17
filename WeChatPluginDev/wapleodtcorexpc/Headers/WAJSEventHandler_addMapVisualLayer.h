//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WAJSEventHandler_addMapVisualLayer : NSObject
{
    NSMutableArray *_markersAddMap;
    NSMutableArray *_markersAddCluster;
}

@property(retain, nonatomic) NSMutableArray *markersAddCluster; // @synthesize markersAddCluster=_markersAddCluster;
@property(retain, nonatomic) NSMutableArray *markersAddMap; // @synthesize markersAddMap=_markersAddMap;
- (void)handleJSEvent:(id)arg1;

@end

