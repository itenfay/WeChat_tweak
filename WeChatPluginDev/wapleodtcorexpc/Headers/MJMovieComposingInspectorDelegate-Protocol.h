//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieComposingInspector;

@protocol MJMovieComposingInspectorDelegate <NSObject>

@optional
- (void)movieComposingInspectorWillAppear:(MJMovieComposingInspector *)arg1;
- (void)movieComposingInspectorWillDisappear:(MJMovieComposingInspector *)arg1;
@end

