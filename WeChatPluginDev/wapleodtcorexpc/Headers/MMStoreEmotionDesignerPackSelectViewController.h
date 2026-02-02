//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMStoreEmotionDesignerPackSelectViewControllerDelegate;

@interface MMStoreEmotionDesignerPackSelectViewController
{
    id <MMStoreEmotionDesignerPackSelectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMStoreEmotionDesignerPackSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapEmoticonWithItem:(id)arg1;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (_Bool)shouldRemoveExpiredPack;
- (_Bool)shouldUseRichStyle;
- (void)initNavBar;

@end

