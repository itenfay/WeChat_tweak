//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextView;

@interface CustomDescTableViewCell : UITableViewCell
{
    UITextView *_m_descView;
    UILabel *_m_descHint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_descHint; // @synthesize m_descHint=_m_descHint;
@property(retain, nonatomic) UITextView *m_descView; // @synthesize m_descView=_m_descView;
- (id)accessibilityElements;

@end

