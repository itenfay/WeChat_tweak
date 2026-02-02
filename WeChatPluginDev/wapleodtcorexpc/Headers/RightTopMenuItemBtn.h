//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RightTopMenuItemBtnData;

@interface RightTopMenuItemBtn
{
    RightTopMenuItemBtnData *m_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RightTopMenuItemBtnData *m_data; // @synthesize m_data;
- (id)initWithBtnData:(id)arg1 showNew:(_Bool)arg2;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end

