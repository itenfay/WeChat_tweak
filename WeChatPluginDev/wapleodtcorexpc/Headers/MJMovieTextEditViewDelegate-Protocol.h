//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextEditView, NSString;

@protocol MJMovieTextEditViewDelegate <NSObject>

@optional
- (void)movieTextEditViewDidSelectDelete:(MJMovieTextEditView *)arg1;
- (void)movieTextEditViewDidSelectEditText:(MJMovieTextEditView *)arg1;
- (void)movieTextEditViewDidChangeDisplayingText:(NSString *)arg1;
@end

