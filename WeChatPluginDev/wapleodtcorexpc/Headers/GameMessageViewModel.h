//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameMessageViewModel
{
    unsigned int m_gameType;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) unsigned int gameType; // @synthesize gameType=m_gameType;
- (id)additionalAccessibilityDescription;
- (id)getReferImage;
- (_Bool)hasReferImage;
@property(readonly, nonatomic) unsigned int realGameIndex;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

