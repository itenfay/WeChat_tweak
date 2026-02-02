//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ServiceNotifyMessageItem;

@interface ServiceNotifyMessageViewModel
{
    ServiceNotifyMessageItem *_serviceNotifyMsgItem;
}

+ (id)itemsFont;
+ (double)itemsFontSize;
+ (id)titleFont;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ServiceNotifyMessageItem *serviceNotifyMsgItem; // @synthesize serviceNotifyMsgItem=_serviceNotifyMsgItem;
- (double)calculateHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

