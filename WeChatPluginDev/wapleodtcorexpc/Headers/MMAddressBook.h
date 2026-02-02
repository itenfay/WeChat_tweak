//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMAddressBook : NSObject
{
    NSString *m_phone;
    NSString *m_phoneLabel;
    NSString *m_email;
    NSString *m_nickname;
    NSString *m_nicknamePinYin;
    NSString *m_nicknamePinYinShort;
    UIImage *m_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(retain, nonatomic) NSString *m_nicknamePinYinShort; // @synthesize m_nicknamePinYinShort;
@property(retain, nonatomic) NSString *m_nicknamePinYin; // @synthesize m_nicknamePinYin;
@property(retain, nonatomic) NSString *m_nickname; // @synthesize m_nickname;
@property(retain, nonatomic) NSString *m_email; // @synthesize m_email;
@property(retain, nonatomic) NSString *m_phoneLabel; // @synthesize m_phoneLabel;
@property(retain, nonatomic) NSString *m_phone; // @synthesize m_phone;
- (_Bool)copyFieldFromAddressBook:(id)arg1;
- (long long)compareMMAddressBookAscending:(id)arg1;
- (id)description;

@end

