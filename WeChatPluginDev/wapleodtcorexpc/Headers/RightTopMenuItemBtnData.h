//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RightTopMenuItemBtnData
{
    NSString *m_nsID;
    NSString *m_nsTitleID;
    NSString *m_nsImageName;
    unsigned long long m_actionType;
    NSString *m_nsActionName;
    NSString *m_nsPluginUserName;
}

+ (id)genItemWithID:(id)arg1 title:(id)arg2 imageName:(id)arg3 actionType:(unsigned long long)arg4 actionName:(id)arg5 pluginUserName:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsPluginUserName; // @synthesize m_nsPluginUserName;
@property(retain, nonatomic) NSString *m_nsActionName; // @synthesize m_nsActionName;
@property(nonatomic) unsigned long long m_actionType; // @synthesize m_actionType;
@property(retain, nonatomic) NSString *m_nsImageName; // @synthesize m_nsImageName;
@property(retain, nonatomic) NSString *m_nsTitleID; // @synthesize m_nsTitleID;
@property(retain, nonatomic) NSString *m_nsID; // @synthesize m_nsID;
- (id)init;

@end

