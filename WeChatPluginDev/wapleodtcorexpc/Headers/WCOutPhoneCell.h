//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCOutPhoneCell : NSObject
{
    UILabel *_phoneLabelLabel;
    UILabel *_phoneNumLabel;
}

@property(retain, nonatomic) UILabel *phoneNumLabel; // @synthesize phoneNumLabel=_phoneNumLabel;
@property(retain, nonatomic) UILabel *phoneLabelLabel; // @synthesize phoneLabelLabel=_phoneLabelLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

