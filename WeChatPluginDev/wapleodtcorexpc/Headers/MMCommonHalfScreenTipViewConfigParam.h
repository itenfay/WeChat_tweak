//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIButton;

@interface MMCommonHalfScreenTipViewConfigParam : NSObject
{
    unsigned int _m_viewConfigNavigationBarFlag;
    NSString *_titleViewWord;
    double _titleViewTop;
    NSString *_descViewWord;
    NSString *_operateButtonTitle;
    double _descContentViewTop;
    double _descContentViewBottom;
    UIButton *_operateButton;
    UIButton *_cancelButton;
    double _operateButtonBottom;
    long long _titleViewTextAlignment;
    long long _descViewTextAlignment;
    CDUnknownBlockType _operateBlock;
    CDUnknownBlockType _cancelBlock;
    NSArray *_arrDescContentTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrDescContentTitle; // @synthesize arrDescContentTitle=_arrDescContentTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType operateBlock; // @synthesize operateBlock=_operateBlock;
@property(nonatomic) long long descViewTextAlignment; // @synthesize descViewTextAlignment=_descViewTextAlignment;
@property(nonatomic) long long titleViewTextAlignment; // @synthesize titleViewTextAlignment=_titleViewTextAlignment;
@property(nonatomic) double operateButtonBottom; // @synthesize operateButtonBottom=_operateButtonBottom;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(nonatomic) double descContentViewBottom; // @synthesize descContentViewBottom=_descContentViewBottom;
@property(nonatomic) double descContentViewTop; // @synthesize descContentViewTop=_descContentViewTop;
@property(retain, nonatomic) NSString *operateButtonTitle; // @synthesize operateButtonTitle=_operateButtonTitle;
@property(retain, nonatomic) NSString *descViewWord; // @synthesize descViewWord=_descViewWord;
@property(nonatomic) double titleViewTop; // @synthesize titleViewTop=_titleViewTop;
@property(retain, nonatomic) NSString *titleViewWord; // @synthesize titleViewWord=_titleViewWord;
@property(nonatomic) unsigned int m_viewConfigNavigationBarFlag; // @synthesize m_viewConfigNavigationBarFlag=_m_viewConfigNavigationBarFlag;
- (id)init;

@end

