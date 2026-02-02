//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIWindow.h>

@class NSHashTable;

@interface MMUIBaseWindow : UIWindow
{
    NSHashTable *_stickerViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *stickerViews; // @synthesize stickerViews=_stickerViews;
- (void)removeStickerView:(id)arg1;
- (void)addStickerView:(id)arg1;
- (void)didAddSubview:(id)arg1;

@end

