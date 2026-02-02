//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, WAMapAnnotationView;

@interface WAJSEventHandler_translateMapMarker
{
    int _workingAnim;
    NSMutableArray *_keyFrames;
    NSDictionary *_dic;
    WAMapAnnotationView *_markerView;
}

- (void).cxx_destruct;
@property(nonatomic) int workingAnim; // @synthesize workingAnim=_workingAnim;
@property(nonatomic) __weak WAMapAnnotationView *markerView; // @synthesize markerView=_markerView;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) NSMutableArray *keyFrames; // @synthesize keyFrames=_keyFrames;
- (void)checkNextFrameAnimation;
- (void)startKeyFrameAnimation;
- (void)handleJSEvent:(id)arg1;

@end

