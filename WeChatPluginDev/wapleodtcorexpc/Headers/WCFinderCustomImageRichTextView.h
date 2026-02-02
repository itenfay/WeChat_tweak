//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderCustomImageRichTextView
{
    NSMutableDictionary *_respCache;
}

+ (id)defaultSVGMap;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *respCache; // @synthesize respCache=_respCache;
- (struct CGRect)getFrameOfImageStyleMatches:(CDUnknownBlockType)arg1;
- (_Bool)handleCommentIcon:(id)arg1 size:(struct CGSize)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)provideImageForStyle:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

