//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsItemView;

@interface SayHelloContactsItemCell : NSObject
{
    ContactsItemView *_contactItemView;
}

@property(retain, nonatomic) ContactsItemView *contactItemView; // @synthesize contactItemView=_contactItemView;
- (void)setBackgroundColor:(id)arg1;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

