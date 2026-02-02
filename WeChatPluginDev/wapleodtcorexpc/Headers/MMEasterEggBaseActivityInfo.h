//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMEasterEggBaseActivityInfo : NSObject
{
    int _size;
    NSString *_imageFilePath;
    long long _animationType;
    NSString *_appId;
    NSArray *_frames;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (id)generateInteractiveImplicitView:(id)arg1;
- (void)asyncGetFramesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)interactiveImplicitView;
- (void)asyncPrepareInteractiveImplicitViewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)supportInteractiveImplicitView;
- (_Bool)isValid;
- (void)tryParseEntryAnimTypeNodeFromActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseAppIdFromActivityNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

