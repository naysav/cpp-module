/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:37:45 by ralena            #+#    #+#             */
/*   Updated: 2022/04/16 17:37:46 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T &a, T &b) { 
	return a < b ? a : b; 
}

template <typename T> T max(T &a, T &b) {
	return a > b ? a : b;
}