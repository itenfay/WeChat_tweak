//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WAJSEventHandler_addMapLines
{
    NSMutableArray *_overlays;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *overlays; // @synthesize overlays=_overlays;
- (id)createArrowImage:(struct CGSize)arg1;
- (void)addMapLine:(id)arg1 line:(id)arg2;
- (void)handleJSEvent:(id)arg1;

@end

