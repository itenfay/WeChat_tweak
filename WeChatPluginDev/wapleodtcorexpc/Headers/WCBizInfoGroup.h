//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UILabel;

@interface WCBizInfoGroup : NSObject
{
    NSMutableArray *m_arrayItem;
    NSString *m_error;
    NSString *m_footerTip;
    NSString *m_headerTip;
    UILabel *m_tipLabel;
    NSString *m_footerTipsTitle;
    NSString *m_footerTipsContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_footerTipsContent; // @synthesize m_footerTipsContent;
@property(retain, nonatomic) NSString *m_footerTipsTitle; // @synthesize m_footerTipsTitle;
@property(retain, nonatomic) NSString *m_headerTip; // @synthesize m_headerTip;
@property(retain, nonatomic) NSString *m_footerTip; // @synthesize m_footerTip;
@property(retain, nonatomic) NSString *m_error; // @synthesize m_error;
@property(retain, nonatomic) NSArray *m_arrayItem; // @synthesize m_arrayItem;
- (id)getTipLabel;
- (void)addItem:(id)arg1;
- (void)setError:(id)arg1;
- (void)dealloc;
- (id)initWithFooterTip:(id)arg1 footerTipTitle:(id)arg2 footerTipsContent:(id)arg3 headerTip:(id)arg4 error:(id)arg5;
- (id)initWithFooterTip:(id)arg1 headerTip:(id)arg2 error:(id)arg3;

@end

