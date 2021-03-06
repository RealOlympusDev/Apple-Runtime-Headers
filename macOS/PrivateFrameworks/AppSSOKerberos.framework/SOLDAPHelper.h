//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_ldap_connection;

@interface SOLDAPHelper : NSObject
{
    _Bool _isConnected;
    NSObject<OS_ldap_connection> *_ldap;
}

@property(retain, nonatomic) NSObject<OS_ldap_connection> *ldap; // @synthesize ldap=_ldap;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct *)arg1 forSPN:(id)arg2;
- (void)useDigestMD5Auth:(id)arg1 andPassword:(id)arg2;
- (void)disconnect;
- (void)queryforBaseDN:(id)arg1 andScope:(int)arg2 andAttributes:(id)arg3 withFilter:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)connectToLDAPWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectToLDAPServer:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setupLDAPconnection:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3;
- (void)dealloc;
- (id)init;

@end

