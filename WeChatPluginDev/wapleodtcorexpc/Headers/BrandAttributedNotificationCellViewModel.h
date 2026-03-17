//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray;

@interface BrandAttributedNotificationCellViewModel : NSObject
{
    NSMutableArray *m_messageTextArr;
    CContact *m_brandContact;
}

+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (id)messageAttributedStringArr;
- (id)messageAttributedStringAtIndex:(unsigned long long)arg1;
- (unsigned int)messageAttributedStringMaxLineCountAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageAttributedStringCount;
- (id)arrText;
- (id)notifyMsg;
- (double)timeLabelTopMargin;
- (double)firstMessageAttributedStringTopSpace;
- (struct CGSize)messageLabelSizeAtIndex:(unsigned long long)arg1;
- (struct CGSize)messageLabelSize;
- (id)messageLabelStyles;
- (id)messageText;
- (double)viewHeight;
- (id)headerImgUrl;
- (id)contactLabelStr;
- (id)brandContact;
- (void)updateBrandContact;
- (id)cellViewClassName;

@end

