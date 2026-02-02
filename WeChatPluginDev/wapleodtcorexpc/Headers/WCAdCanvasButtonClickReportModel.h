//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCAdCanvasButtonClickReportModel : NSObject
{
    int _scene;
    int _originScene;
    int _action;
    int _subType;
    int _type;
    int _halfScreenMode;
    NSString *_snsid;
    NSString *_uxinfo;
    NSString *_canvasId;
    NSString *_viewid;
    NSString *_commInfo;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int halfScreenMode; // @synthesize halfScreenMode=_halfScreenMode;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int originScene; // @synthesize originScene=_originScene;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *commInfo; // @synthesize commInfo=_commInfo;
@property(retain, nonatomic) NSString *viewid; // @synthesize viewid=_viewid;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(retain, nonatomic) NSString *snsid; // @synthesize snsid=_snsid;

@end

