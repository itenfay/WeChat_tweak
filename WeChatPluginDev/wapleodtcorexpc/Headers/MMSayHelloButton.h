//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class CPushContact, NSString;

@interface MMSayHelloButton : UIButton
{
    CPushContact *m_oLastVerifyContact;
    NSString *m_nsUsrName;
    unsigned int m_uiUnReadCount;
    double m_fHeight;
}

- (void).cxx_destruct;
- (void)onFriendAssistUnreadCountChanged;
- (unsigned int)GetUnReadCount;
- (void)UpdateView;
- (id)initWithUsrName:(id)arg1 Height:(double)arg2;

@end

