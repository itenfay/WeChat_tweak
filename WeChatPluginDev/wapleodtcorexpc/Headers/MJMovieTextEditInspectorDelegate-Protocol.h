//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextEditInspector, MJSegmentViewModel, NSString, OMJID;

@protocol MJMovieTextEditInspectorDelegate <NSObject>

@optional
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 keyboardWillHide:(_Bool)arg2 inspectorHeight:(double)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 keyboardWillShow:(double)arg2 inspectorHeight:(double)arg3;
- (void)textEditInspectorWillDisappear:(MJMovieTextEditInspector *)arg1;
- (void)textEditInspectorWillAppear:(MJMovieTextEditInspector *)arg1;
- (void)textEditInspectorDidFinish:(MJMovieTextEditInspector *)arg1;
- (void)textEditInspectorWillBeginEditing:(MJMovieTextEditInspector *)arg1;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 didEndChangeMaterialWithDataType:(unsigned long long)arg2;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateTextAnimPreset:(NSString *)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateColor:(NSString *)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateFont:(NSString *)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateMaterialID:(NSString *)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 updateUnmarkedText:(NSString *)arg2 isUsingSuggestion:(_Bool)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateSubText:(NSString *)arg3;
- (void)textEditInspector:(MJMovieTextEditInspector *)arg1 segmentID:(OMJID *)arg2 updateText:(NSString *)arg3;
- (MJSegmentViewModel *)textEditInspector:(MJMovieTextEditInspector *)arg1 anchorMovieTextWithMaterialID:(NSString *)arg2;
@end

