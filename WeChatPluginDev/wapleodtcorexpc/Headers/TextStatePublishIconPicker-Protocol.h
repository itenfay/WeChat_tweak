//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStatePublishIconList;

@protocol TextStatePublishIconPicker <NSObject>
@property(copy, nonatomic) CDUnknownBlockType iconPickHandler;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList;
- (_Bool)enableDragToClose;
- (void)refresh;
- (void)resetToTop;
@end

