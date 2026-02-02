//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmojiEmoticonChangeMgr : NSObject
{
    struct map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromSoftbankToUnified;
    struct map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromUnifiedToSoftbank;
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)countEmojiFromSoftbank:(id)arg1;
- (unsigned int)countEmojiFromUnified:(id)arg1;
- (id)changeEmojiFromSoftbankToUnified:(id)arg1;
- (void)dealloc;
- (id)init;

@end

