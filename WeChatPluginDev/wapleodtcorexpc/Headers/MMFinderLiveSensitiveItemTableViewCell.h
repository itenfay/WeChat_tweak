//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSensitiveDataItem, RichTextView;

@interface MMFinderLiveSensitiveItemTableViewCell
{
    RichTextView *_sensitiveTextView;
    MMFinderLiveSensitiveDataItem *_sensitiveDataItem;
}

+ (double)preferHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSensitiveDataItem *sensitiveDataItem; // @synthesize sensitiveDataItem=_sensitiveDataItem;
@property(retain, nonatomic) RichTextView *sensitiveTextView; // @synthesize sensitiveTextView=_sensitiveTextView;
- (void)updateSensitiveDataItem:(id)arg1;
- (void)layoutSensitiveTextView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configEditMenuButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

